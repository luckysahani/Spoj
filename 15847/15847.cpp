#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
	//long long unsigned int  white,black;
	int testcases,blocks,x,y,index;
	int input[101];
	scanf("%d",&testcases);
	while(testcases>0){
		//if(fmod(input,10)==0){cout<<2<<endl;}else{cout<<1<<endl<<fmod(input,10)<<endl;}
		scanf("%d",&blocks);
		
		for (int k = 1; k <= blocks; ++k)
		{
			scanf("%d",&input[k]);
			// if(max<=input[k])
			// {
			// 	max=input[k];
			// 	index=k;
			// }
			if((blocks%2==0)&&(k>2))
			{
				if((input[k-1]<=input[k-2]))
				{
					x=input[k-2]+input[k-1]+1;
					input[k-1]+=x;
					input[k]+=x;

				}
			}
		}
		if(blocks%2==1)
		{
			printf("YES\n");
			testcases--;
			continue;
		}
		// cout<<endl;
		// for (int i = 1; i <= blocks; ++i)
		// {
		// 	cout<<input[i]<<" ";
		// }
		// cout<<endl;
		// for (int i = blocks; i > 2; --i)
		// {
		// 	while(input[i]!=max)
		// 	{
		// 		input[i-1]++;
		// 		input[i]++;
		// 	}
		// }
		// int temp1,temp2,sum;
		// for (int i = index-1; i >1; --i)
		// {
		// 	x=max-input[i];
		// 	input[i]+=x;
		// 	input[i-1]+=x;
		// }
		// x=max-input[1];
		// input[1]+=x;
		// input[blocks]+=x;
		// for (int i = blocks; i >index+1; ++i)
		// {
		// 	x=max-input[i];
		// 	input[i]+=x;
		// 	input[i-1]+=x;
		// }
		for (int i = blocks; i > 2; --i)
		{
			if(input[i]!=input[i-1])
			{
				x=input[i]-input[i-1];
				input[i-1]+=x;
				input[i-2]+=x;
			}
		}
		// cout<<endl;
		// for (int i = 1; i <= blocks; ++i)
		// {
		// 	cout<<input[i]<<" ";
		// }
		// cout<<endl;
		if(input[blocks]==input[1])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}

		


		testcases--;
	}
	return 0;
} 
 
