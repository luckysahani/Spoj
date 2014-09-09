#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  m,up,down=0,n,temp[1000000];float i,j,input,input1;int th;
	scanf("%f",&input);	temp[1]=0;temp[2]=1;temp[3]=3;
	for (  m = 4; m <= 1000000; ++m)
	{		temp[m]=temp[m-2]+(m*(m-1)/2);
	}
	for ( j = 0; j < input; ++j)
	{
		scanf("%llu",&n);
		up= (((n*(n+1)*(2*n+1))/12)+(n*(n+1))/4);
		th=(int)(n);
		printf("%llu\n",(up+temp[th]));
	}
	return 0;

}
