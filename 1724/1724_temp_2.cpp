#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int input1[1000000];int input,k1,j;float i,temp,temp1,k,up,n,down=0;
	scanf("%d",&input);
	for ( j = 1; j < 1000000; ++j)
	{
		n=j;
		up= (((n*(n+1)*(2*n+1))/12)+(n*(n+1))/4);
		down=0;
		for ( i = n-1; i>0; i=i-2)
		{
			down=down+(i*(i+1)/2);
		}
		input1[j]=up+down;
	}
	for (int l = 0; l < input; ++l)
	{
		scanf("%d",&k1);
		printf("%llu\n",input1[k1]);

	}
	
}
