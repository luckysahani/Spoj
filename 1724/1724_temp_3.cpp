#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	long double  up,down=0;float i,j,input,n,input1;
	scanf("%f",&input);
	for ( j = 0; j < input; ++j)
	{
		scanf("%f",&input1);
		n=input1;
		up= (((n*(n+1)*(2*n+1))/12)+(n*(n+1))/4);
		down=0;
		for ( i = n-1; i>0; i=i-2)
		{
			down=down+(i*(i+1)/2);
		}
		printf("%.0Lf\n",(up+down));
	}

}
