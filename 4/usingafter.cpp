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
	int inp,j=0,count,k=0;
	cin>>inp;
	string input,out,out1,out2,out3,after[500];
	char temp1,temp2;
	stack<char> variables,character,final,final1,final2,final3,input1;
	stack<string> fin;
	list<char> var1;
	for (int i = 0; i < inp; ++i)
	{
		cin>>input;
		j=0;k=0;
		out.clear();
		while(j<input.length())
		{
			input1.push(input[j]);
			temp1=input1.top();
			if(temp1=='+'||temp1=='-'||temp1=='/'||temp1=='*'||temp1=='^'){count++;}
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
						character.push(temp1);
					}
				}

				x:
				//variables=sort(variables);
				//sort_string(out1);
				var1.sort();
				while(!character.empty()){
					temp1=character.top();
					character.pop();
					final.push(temp1);

				}
				while(!var1.empty()){
					temp1=var1.back();
					if (temp1==6)
					{						
						var1.pop_back();
						final.push('^');
					}
					if (temp1==5)
					{						
						var1.pop_back();
						final.push('*');
					}if (temp1==4)
					{						
						var1.pop_back();
						final.push('/');
					}if (temp1==3)
					{						
						var1.pop_back();
						final.push('+');
					}if (temp1==2)
					{						
						var1.pop_back();
						final.push('-');
					}
					
				}
			}
			while(!final.empty()){
				temp1=final.top();
				final.pop();out2=temp1;
				after[k].append(out2);
				final2.push(temp1);
				k++;
			}
			j++;
			
		}
		while(!final2.empty()){
				temp1=final2.top();
				final2.pop();//out2=temp1;
				//after[k].append(out2);
				final3.push(temp1);
				//k++;
			}
		
		while(!final3.empty()){
			temp1=final3.top();
			final3.pop();
			cout<<temp1;
		}
		for (int v = 0; v < k; ++v)
		{
			cout<<"\nafter is "<<after[v]<<endl;
			/* code */
		}
		cout<<endl;
	}
}