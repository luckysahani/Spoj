#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
	long long unsigned int  white,black;
	int kio;
	cin>>kio;
	while(kio>0){
		//if(fmod(input,10)==0){cout<<2<<endl;}else{cout<<1<<endl<<fmod(input,10)<<endl;}
		cin>>white>>black;
		if((black%2==0)){cout<<"0.000000"<<endl;}
		else{
			cout<<"1.000000"<<endl;
		}





		kio--;
	}
	return 0;
} 
 
