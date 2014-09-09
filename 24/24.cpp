#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;

int factorial(int input1)
{
	if(input1==1)
	{
		return 1;
	}
	return input1*factorial(input1 - 1 );
}
int bigfactorial(int input1)
{
	int digits[200],i,carry=0,temp,dig,input_temp=input1;
	for (int i = 0; i < 200; ++i)
	{
		digits[i]=0;
		/* code */
	}
	for (int i = input1-1; i >0; i--)
	{
		if(i==(input1-1))
		{
			digits[0]=input1%10;
			digits[1]=(input1-digits[0])/10;
			dig=2;
		}
		carry=0;
		for (int j = 0; j <200; ++j)
		{
			if(j==0)
			{
				//printf("j=%d,temp=%d,carry=%d\n",j,temp,carry );
			}
			temp=((digits[j]*i)+carry)%10;
			carry=(((digits[j]*i)+carry)-temp)/10;
			digits[j]=temp;
			if(j==0)
			{
				//printf("j=%d,temp=%d,carry=%d\n",j,temp,carry );
			}
			//printf("%d %d %d\n",input1,digits[j],carry );

		}
		//printf("%d %d %d\n",digits[2],digits[1],digits[0] );

	}
	temp=1;
	for (int i = 199; i >= 0; --i)
	{
		if((digits[i]==0)&&(temp==1))
		{
			temp=1;
		}
		else
		{
			temp=0;
			printf("%d", digits[i]);
		}
		/* code */
	}
}
int main()
{
	int input,i,j=0;
	scanf("%d",&input);
	int fact[input];
	for ( i = 0; i < input; ++i)
	{
		scanf("%d",&(fact[i]));
	}
	for ( i = 0; i < input; ++i)
	{
		if(fact[i]<13)
		{
			j=factorial(fact[i]);
			printf ("%d\n",j);
		}
		else
		{
			bigfactorial(fact[i]);
		
			cout<<endl;
		}
		
	}
	return 0;
}
