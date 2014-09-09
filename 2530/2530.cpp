#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  out[1000];
	unsigned int kio,w;
	int count=1;
	out[1]=1;
	out[2]=5;
	out[0]=1;
	out[3]=11;
	//out[3]=11;
	for (int k1 = 4; k1 < 1000; ++k1)
	{
		out[k1]=5*out[k1-2]+out[k1-1]+out[k1-3]-out[k1-4];
		//cout<<"out["<<k1<<"]=="<<out[k1]<<endl;
	}
	cin>>kio;
	while(kio>0){
		cin>>w;
		 printf("%d %llu\n",count,out[w]);
		count++;

		kio--;
	}
	return 0;
} 
 
