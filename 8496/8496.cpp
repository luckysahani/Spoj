#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int squarefree[100001][10];

int issquarefree(int x)
{
	for (int i = 2; i <= sqrt(x); ++i)
	{
		if(x%(i*i)==0){return -1;}
	}
	return 1;
}
int ispresent(int digit,int i)
{
	int temp;
	while(i>0)
	{
		temp=i%10;
		if(temp==digit){return 1;}
		i=i/10;
	}
	return 0;


}
int ans(int number , int digit)
{
	int count=0;
	for (int i = 1; i < number+1; ++i)
	{
		if(ispresent(digit,i)==1)
		{
			if(issquarefree(i)==1)
			{
				count++;
			}
		}
		
	}
	return count;
}
int ans2(int start,int end , int digit)
{
	int count=0;
	for (int i = start; i < end+1; ++i)
	{
		if(ispresent(digit,i)==1)
		{
			if(issquarefree(i)==1)
			{
				count++;
			}
		}
		
	}
	return count;
}
int main()
{
	int start,end,digit,kio;
	for (int i = 0; i < 10; ++i)
	{
		squarefree[1][i]=0;
	}
	squarefree[1][1]=1;
	for (int j = 2; j < sqrt(100001); ++j)
	{
		for (int i = j*j; i < 100001; i=i+j*j)
		{
			squarefree[i][i]=ans(j,i);
			//cout<<"squarefree["<<j<<"]["<<i<<"]== "<<squarefree[j][i]<<endl;
		}
		//squarefree[j][=issquarefree(j);
		
	}
	cin>>kio;
	//scanf("%d",&kio);
	//cout<<"no  . of times loop will run is"<<kio<<endl;
	while(kio>0){
		 cin>>start>>end>>digit;
		//scanf("%d %d %d",&start,&end,&digit);
		//cout<<"squarefree["<<start<<"]["<<digit<<"]== "<<squarefree[start][digit]<<endl;
		//cout<<"squarefree["<<end<<"]["<<digit<<"]== "<<squarefree[end][digit]<<endl;
		//cout<<(squarefree[start][digit]-squarefree[end][digit])<<endl;
		cout<<ans2(start,end,digit)<<endl;

		kio--;
	}
	return 0;
} 
 
