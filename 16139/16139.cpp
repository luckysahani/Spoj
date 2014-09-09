#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  out[1000];
	unsigned int kio,w;
	
	cin>>kio;
	while(kio>0){
		cin>>w;
		if(w%2==0){cout<<"1"<<endl;}
		else{cout<<"0"<<endl;}

		kio--;
	}
	return 0;
} 
 
