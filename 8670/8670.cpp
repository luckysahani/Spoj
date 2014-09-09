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
	 long double  inp1,inp2,inp3,x,y;
	cin>>inp1;
	for (int l = 0; l < inp1; ++l)
	{
		cin>>inp2;
		inp3=((4*(pow(inp2,2)))+0.25);
		cout<<"Case "<<l+1<<": ";
		printf("%.2Lf",inp3);
		cout<<endl;
	}
	return 0;
} 
