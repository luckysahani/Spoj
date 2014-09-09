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
	/* code */
	int inp,x,y;
	cin>>inp;
	for (int l = 0; l < inp; ++l)
	{
		cin>>x>>y;
		if(x==y){
			if(x%2!=0){cout<<2*x-1<<endl;}
			else{cout<<2*x<<endl;}
		}
		else if((x-y)==2){if(x%2!=0){cout<<x+y-1<<endl;}
			else{cout<<y+x<<endl;}}
		else{
			cout<<"No Number"<<endl;

		}
	}
	return 0;
}