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
	stack<char> variables,character,final;
	stack<string> fin;
	for (int i = 0; i < inp; ++i)
	{
		cin>>input;
		cout<<input<<endl;
		j=0;
		out.clear();
		while(j<input.length())
		{
			j++;
			if(input[j]=='(')
			{
				
			}
			else if (input[j]==')')
			{
				while(!character.empty()){
					temp1=character.top();
					character.pop();
					final.push(temp1);
				}
				while(!variables.empty()){
					temp1=variables.top();
					variables.pop();
					final.push(temp1);
				}
				while(!final.empty()){
					temp1=final.top();
					final.pop();
					out1=temp1;
					out.append(out1);
				}
				out.append(after);
				after.clear();
			}
			else if (input[j]=='+'||input[j]=='-'||input[j]=='/'||input[j]=='*'||input[j]=='^')
			{
				character.push(input[j]);
			}
			else
			{
				variables.push(input[j]);
			}
		}
		cout<<"out"<<out;;
		cout<<endl;
	}
}