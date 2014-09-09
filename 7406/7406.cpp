#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  input,inp,y,z,x;double t1,t2;
	scanf("%llu",&input);
	while(input!=-1)
	{	
		x=input-1;
		if(x==0){cout<<"Y\n";goto yu;}
		if(x%3!=0){cout<<"N\n";}
		else{
			//x=x/3;
			//x=x+1;
			ty:
			t2=x;
			t1=t2/3;
			//cout<<"t2/3="<<t1<<endl;
			t1=t1+double(0.25);
			//cout<<"t1+1/4="<<t1<<endl;
			t1=sqrt(t1);
			//cout<<"t1 sqrt="<<t1<<endl;
			t1=t1-double(0.5);
			//cout<<"t1-1/2="<<t1<<endl;

			//t1=t1/9;
			//cout<<"t1 is "<<fmod(t1,1);
			if(fmod(t1,1)!=0){cout<<"N\n";goto yu;}
			else{cout<<"Y\n";goto yu;}

		}
		yu:scanf("%llu",&input);
	}
	return 0;
} 
 
