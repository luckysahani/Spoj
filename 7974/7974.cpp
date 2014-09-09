
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
int main()
{
	int inp1,inp2,inp3,x,y;
	cin>>inp1>>inp2>>inp3;
	while((inp1!=0)&&(inp2!=0)&&(inp3!=0))
	{
		if((inp2-inp1)==(inp3-inp2))
		{
			cout<<"AP "<<(inp3+inp2-inp1)<<endl;
		}
		else if((inp3/inp2)==(inp2/inp1))
		{
			cout<<"GP "<<(inp3*inp3/inp2)<<endl;
		}
		cin>>inp1>>inp2>>inp3;
	}
	return 0;
}