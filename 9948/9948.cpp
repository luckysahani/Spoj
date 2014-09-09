#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	long long unsigned int  n,x,y,z;
	cin>>n;
	start:
	if(n<2){cout<<"TAK\n";return 0;}
	if(fmod(n,2)==1){cout<<"NIE\n";return 0;}
	n=n/2;
	goto start;

	return 0;
} 
 
