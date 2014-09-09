#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  n,x,y,z,y1,y2,y3,y4;
	int testcases;cin>>testcases;
	while(testcases>0){
		cin>>n;
		x=n/4;x=(x*1000);y1=x+192;y2=x+442;y3=x+692;y4=x+942-1000;
		if(n%4==1){cout<<y1<<endl;}
		if(n%4==2){cout<<y2<<endl;}
		if(n%4==3){cout<<y3<<endl;}
		if(n%4==0){cout<<y4<<endl;}
		
		testcases--;
	}
	return 0;
} 
 
