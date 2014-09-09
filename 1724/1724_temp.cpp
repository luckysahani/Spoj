#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
	int input,input1,j;float i,temp,temp1,k,up,n,down=0;
	scanf("%d",&input);
	for ( j = 0; j < input; ++j)
	{
		scanf("%d",&input1);
		n=input1;
		up= (((n*(n+1)*(2*n+1))/12)+(n*(n+1))/4);
		down=0;
		temp=((n*n)/2)+1-n+((n*n*n)/2)-((2*n*n)-2*n);
		if((input1-3)%2==0){k=(n-3)/2;}
		else{k=(n-2)/2;}
		temp1=(k*((2*k)-1)*((2*k)+1)/3);
		for ( i = n-1; i>0; i=i-2)
		{
			down=down+(i*(i+1)/2);
		}
		printf("temp==%f,temp1==%f,down=%f,downexpected==%f\n",temp,temp1,down,temp+temp1 );
		printf("%d\n",(int)(up+down));
	}

}
