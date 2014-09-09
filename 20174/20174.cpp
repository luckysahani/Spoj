#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
long long unsigned int divisors(long long unsigned int j)
{
	int sum=0;
	for (int i = 1; i < sqrt(j); ++i)
	{
		if(fmod(j,i)==0){sum=+2;}
	}
	if(fmod(j,sqrt(j))==0){sum++;}
	return sum;
}
int main()
{
	int testcases;
	cin>>testcases;
	long long unsigned int out[10001],input;
	out[1]=1;
	for (long int i = 2; i < 10001; ++i)
	{
		out[i]=divisors(i*i*i)+out[i-1];
		cout<<"out"
	}
	for (int j = 0; j < testcases; ++j)
	{
		cin>>input;
		if(input<=10000){cout<<out[input]<<endl;continue;}
		else{

		}

	}
	return 0;
} 
 
