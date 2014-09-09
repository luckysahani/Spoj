#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  input,x;
	while(scanf("%llu",&input)==1){	if(fmod(input,10)==0){cout<<2<<endl;}else{cout<<1<<endl<<fmod(input,10)<<endl;}}
	return 0;
} 
 
