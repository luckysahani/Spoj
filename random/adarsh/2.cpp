#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int N=1000;

typedef struct {
     char S[1000];  // S is an array of type Data and of size N
     int top;
} stack;

bool IsStackEmpty(stack *S) {
    if (S->top == 0)  
    	return 1;
    else return 0;
}

void Push (stack *S, char x){
//    if(S->top == N)
//	cout<< "stack overflow" << endl;
//    else { 
		S->top = S->top + 1;
		S->S[S->top] = x;
//    }
}

char Pop(stack *S) {
//    if (S->top == 0)
//	cout <<"Stack Overflow"<<endl;
//    else { 
		S->top = S->top - 1;
	  	return S->S[S->top+1];
//    }
}

char Top(stack *S) {
//    if (S->top == 0)
//	cout << "stack underflow";
//    else { 
		return S->S[S->top]; 
//    }
}

int Size(stack *S) {
    return S->top;
}

void MakeEmpty(stack *S) {
      S->top=0;
}


typedef struct {
     int S[1000];  // S is an array of type Data and of size N
     int top;
} stack1;

bool IsStack1Empty(stack1 *S) {
    if (S->top == 0)  
    	return true;
    else return false;
}

void Push1 (stack1 *s, int x){
//    if(s->top == N)
//		cout<< "stack1 overflow" << endl;
//    else { 
		s->top = s->top + 1;
		(s->S)[s->top] = x;
//    }
}

int Pop1(stack1 *S) {
//    if (S->top == 0)
//	cout <<"Stack1 Overflow"<<endl;
//    else { 
		S->top = S->top - 1;
	  	return S->S[S->top+1];
//    }
}

int Top1(stack1 *S) {
//    if (S->top == 0)
//	cout << "stack1 underflow";
//    else { 
		return S->S[S->top]; 
//    }
}

int Size1(stack1 *S) {
    return S->top;
}

void MakeEmpty1(stack1 *S) {
      S->top=0;
}


int pref(char a)
{
	if(a==')')  return 0; 
	if(a=='(')  return 6;
	if(a=='%')	return 5;
	if(a=='/')	return 4;
	if(a=='*')	return 3;
	if(a=='-')	return 2;
	if(a=='+')	return 1;
}

void popins(stack *operators, stack1* operand){
	int a,b;
	char ch;
	b=Top1(operand);
	Pop1(operand);
	a=Top1(operand);
	Pop1(operand);
	ch=Top(operators);
	Pop(operators);
	if(ch=='/')
	Push1(operand, a/b);
	else if(ch=='*')
	Push1(operand, a*b);
	else if(ch=='%')
	Push1(operand, a%b);
	else if(ch=='+')
	Push1(operand, a+b);
	else if (ch=='-')
	Push1(operand, a-b);
}

int oper(char ch)
{
	if(ch=='%'||ch=='('||ch=='/'||ch=='*'||ch=='+'||ch=='-')
	 return true;
	else
	 return false;
}
int num(char ch)
{
	if(ch>='0' && ch<='9') return 1;
	else return 0;
}

int main() 
{
	char s[1000];
	int i,l,k,a,b;
	char ch;
	ch=getchar();
	i=0;
	while(ch!='\n'&&ch!=EOF)
	{
		s[i]=ch;
		ch=getchar();
		i++;
	}
	s[i]='\0';
	k=strlen(s);
	int array[k];
	l=0;
	array[0]=0;
	stack1 *operand;
	stack *operators;
	operators=(stack*)(calloc(1,sizeof(stack)));
	operand=(stack1*)(calloc(1,sizeof(stack1)));
	int count1=0,count2=0;
	bool check;
	for(i=0;i<k;i++)
	{
	    if(i==0 && (s[i]=='('))
	     {
	     	count1++;
	     	continue;
	     }
	    if(i==0 && num(s[i]))
	      continue;
	    if(i==0 && (oper(s[i]) || s[i]==')'))
	     {
	     	check = false;
			  	break;
	     }
		if(i==(k-1) && oper(s[i]))
		 {
		 	check = false;
			  	break;
		 }
		if(s[i]=='(' && oper(s[i-1]))
		 {
		 	count1++;
		 	continue;
		 }
		if(s[i]=='(' && !oper(s[i-1]))
		 {
		 	check = false;
			  	break;
		 }
		if(s[i]==')' && !oper(s[i-1]))
		 	count2++;
		if(s[i]==')' &&  oper(s[i-1]))
		 {
			check = false;
			  	break;
		}
		if(count2>count1)
		 {
		 	check = false;
		 	break;
		 }
		else
		 {
		    if(s[i]==')')
		     continue;
		    if(oper(s[i]) && oper(s[i-1]))
		     {
		  	    check = false;
		  	     break;
		     }
		    if(num(s[i]) && s[i-1]==')')
		     {
		  	     check = false;
		  	      break;
		     }
		 }
 
	}
	if(count1>count2)
		check=false;
	else check = true;
//	cout<<check<<endl;
	if(check){
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]!=' '){
				if(s[i]<='9' && s[i]>='0')
				{
					while(s[i]<='9' && s[i]>='0')
					{
						array[l]=array[l]*10+s[i]-'0';
						i++;
					}
					i--;
					Push1(operand,array[l]);
					l++;
					array[l]=0;
				}
				else
				{
					if(IsStackEmpty(operators)|| s[i]== '(')
					{
						Push(operators,s[i]);
					}
					else
					{
						if(pref(s[i])>pref(Top(operators))||(Top(operators)=='('&&s[i]!=')')){
							Push(operators,s[i]);
						}
						else
						{
		
							if(s[i]==')')
							{
		                        
		                        			
								while(Top(operators)!='(')
								{
									popins(operators,operand);
								}
							//	cout<<Top(operators);
								Pop(operators);
								
							}
		 					else{
		 						while(!IsStackEmpty(operators) && pref(Top(operators))>pref(s[i]))
								{
									popins(operators,operand);
								}
									Push(operators,s[i]);
		 					}
						}
					}
					
				}
			}
		}
	//	cout<<Top(operators)<<endl;
	//	cout<<operand->top<<endl;
	//	popins(operators,operand);
		while(!IsStackEmpty(operators))
		{
			popins(operators,operand);
		}
		cout<<Top1(operand)<<endl;
	}
	else{
		cout<<"Input Error";
	}
	return 0;
}