#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
using namespace std;
int prior(char x)
{
 switch(x)
 {
 case '^': return 6;
 case '*': return 5;
 case '/': return 4;
 case '+': return 3;
 case '-': return 2;
 case '(': return 1;
 }
 return 0;
}
int main()
{
	int inp,j=0;
	cin>>inp;
	string input,out,out1,out2,after;
	char temp1,temp2;
	stack<char> variables,character,final,final1,final2,input1;
	stack<string> fin;
	list<char> var1;
	for (int i = 0; i < inp; ++i)
	{
		cin>>input;
		j=0;
		out.clear();
		while(j<input.length())
		{
			input1.push(input[j]);
			temp1=input1.top();
			if(temp1=='+'||temp1=='-'||temp1=='/'||temp1=='*'||temp1=='^'||temp1=='('||temp1==')'){}
			else{cout<<temp1;}
			//protiy of operators and what if no brackers
			if (input[j]==')')
			{
				input1.pop();
				temp1=input1.top();
				if(temp1=='('){temp2=input1.top();//cout<<"popped element is"<<temp2<<endl;
					input1.pop();goto x;}
				while((!input1.empty()))
				{
					temp1=input1.top();
					input1.pop();
					if (temp1=='+'||temp1=='-'||temp1=='/'||temp1=='*'||temp1=='^')
					{
						//out=temp1;
						//out1.append(out);
						variables.push(prior(temp1));
						var1.push_front(prior(temp1));
					//	variables=sort(variables);
					}
					else if(temp1=='('){goto x;}
					else{
						//character.push(temp1);
						//cout<<temp1<<endl;
					}
				}

				x:
				//variables=sort(variables);
				//sort_string(out1);
				var1.sort();
				// while(!character.empty()){
				// 	temp1=character.top();
				// 	character.pop();
				// 	final.push(temp1);

				// }
				while(!var1.empty()){
					temp1=var1.back();
					if (temp1==6)
					{						
						var1.pop_back();
						final.push('^');
						cout<<"^";
					}
					if (temp1==5)
					{						
						var1.pop_back();
						final.push('*');
						cout<<"*";
					}if (temp1==4)
					{						
						var1.pop_back();
						final.push('/');
						cout<<"/";
					}if (temp1==3)
					{						
						var1.pop_back();
						final.push('+');
						cout<<"+";
					}if (temp1==2)
					{						
						var1.pop_back();
						final.push('-');
						cout<<"-";
					}
					
					
				}
			}
			j++;
			
		}
		
		
		cout<<endl;
	}
}