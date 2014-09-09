#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int  sumdigit(long long unsigned  w)
{
	int temp=1,sum=0;
	while(w>0)
	{
		temp=w%10;
		sum=sum+temp;
		w=w/10;
	}
	return sum;
}
int main()
{
	long long unsigned   input;
    int kio,count;
	scanf("%u",&kio);
	while(kio>0){
		scanf("%llu",&input);
		while(1){
			count=sumdigit(input);
			if(input%count==0){cout<<input<<endl;break;}
			input=input+1;
		}
		kio--;
	}
	return 0;
} 
 
