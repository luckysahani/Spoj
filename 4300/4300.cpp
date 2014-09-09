#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int findfact(int input)
{
	 int x,count=0;
	 for (int i = 1; i <= sqrt(input); ++i)
	 {
	 	if(input%i==0){count++;}
	 }
	 return count;
}
int main()
{
	int  input,x,y,z,output,sum[10001];
	scanf("%d",&input);
	if(input==0){cout<<"0"<<endl;return 0;}
	if(input==1){cout<<"1\n";return 0;}
	sum[0]=0;sum[1]=1;
	for (int j = 2; j < 10001; ++j)
	{
		sum[j]=findfact(j)+sum[j-1];
		//cout<<"sum["<<j<<"] is :"<<sum[j]<<endl;
		if(input==j){cout<<sum[j]<<endl;return 0;}
	}
	
	return 0;
} 
 
