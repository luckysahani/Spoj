#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
using namespace std;
int main()
{
	int inp,j=0;
	cin>>inp;
	string input,out,out1,after;
	char temp1,temp2;
	stack<char> variables,character,final,input1;
	stack<string> fin;
	for (int i = 0; i < inp; ++i)
	{
		cin>>input;
		cout<<input<<endl;
		j=0;
		out.clear();
		while(j<input.length())
		{
			input1.push(input[j]);
			temp1=input1.top();
			cout<<"\nall emlemets pushed ="<<temp1<<endl;
			if (input[j]==')')
			{
				temp1=input1.top();
				cout<<"temp1 ="<<temp1<<endl;
				temp2=input1.top();cout<<"popped element is"<<temp2<<endl;input1.pop();
				temp1=input1.top();
				cout<<"temp1 ="<<temp1<<endl;
				if(temp1=='('){temp2=input1.top();cout<<"popped element is"<<temp2<<endl;input1.pop();break;}
				while((!input1.empty()))
				{
					temp1=input1.top();
					temp2=input1.top();cout<<"popped element is i while "<<temp2<<endl;input1.pop();
					if (temp1=='+'||temp1=='-'||temp1=='/'||temp1=='*'||temp1=='^')
					{
						cout<<"varaiabel pushed:"<<temp1<<endl;
						variables.push(temp1);
					}
					else if(temp1=='('){goto x;}
					else{
						cout<<"characters pushed:"<<temp1<<endl;
						character.push(temp1);
					}
				}
				x:while(!character.empty()){
					temp1=character.top();
					cout<<"character pushed="<<temp1<<endl;
					character.pop();
					final.push(temp1);
				}
				while(!variables.empty()){
					temp1=variables.top();
					cout<<"variables pushed="<<temp1<<endl;
					variables.pop();
					final.push(temp1);
				}
				cout<<"\nloop found at "<<j<<endl<<"\n stack size=  "<<input1.size()<<endl;
			}
			j++;
			
		}
		cout<<"h1\n";
		while(!final.empty()){
			temp1=final.top();
			final.pop();
			cout<<"\nfinal=="<<temp1;
		}
		while(!character.empty()){
			temp1=character.top();
			cout<<"\ncharacter left="<<temp1<<endl;
			character.pop();
		}
		while(!variables.empty()){
			temp1=variables.top();
			cout<<"variables left="<<temp1<<endl;
			variables.pop();
		}
		cout<<endl;
	}
}