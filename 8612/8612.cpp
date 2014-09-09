#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	long long unsigned int  input,x;
	int count;
	scanf("%d",&count);
	char inp[40];
	int sum[9];
	for (int k = 0; k < count; ++k)
	{
		cin>>x;
		cin>>inp;
		cout<<x;
		for (int l = 1; l < 9; ++l)
		{
			sum[l]=0;
			//cout<<sum[l];
		}
		for (int j = 0; j < 38; ++j)
		{
			if((inp[j]=='T')&&(inp[j+1]=='T')&&(inp[j+2]=='T'))
			{
				sum[1]=sum[1]+1;
			}
			if((inp[j]=='T')&&(inp[j+1]=='T')&&(inp[j+2]=='H'))
			{
				sum[2]=sum[2]+1;
			}
			if((inp[j]=='T')&&(inp[j+1]=='H')&&(inp[j+2]=='T'))
			{
				sum[3]=sum[3]+1;
			}
			if((inp[j]=='T')&&(inp[j+1]=='H')&&(inp[j+2]=='H'))
			{
				sum[4]=sum[4]+1;
			}
			if((inp[j]=='H')&&(inp[j+1]=='T')&&(inp[j+2]=='T'))
			{
				sum[5]=sum[5]+1;
			}
			if((inp[j]=='H')&&(inp[j+1]=='T')&&(inp[j+2]=='H'))
			{
				sum[6]=sum[6]+1;
			}
			if((inp[j]=='H')&&(inp[j+1]=='H')&&(inp[j+2]=='T'))
			{
				sum[7]=sum[7]+1;
			}
			if((inp[j]=='H')&&(inp[j+1]=='H')&&(inp[j+2]=='H'))
			{
				sum[8]=sum[8]+1;
			}
		}
		for (int i = 1; i < 9; ++i)
		{
			cout<<" "<<sum[i];
		}
		cout<<endl;
	}
	return 0;
} 
 
