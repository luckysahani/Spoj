#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;
long long unsigned int arr[1000001];


long long unsigned int out(long long unsigned int input)
{
	if(input<1000000){return arr[input];}
	long long unsigned int output,x,y,z;
	// if(input==2){return 2;}
	// if(input==1){return 1;}
	// if(input==0){return 0;}
	if((floor(input/2))>out(floor(input/2))){x=floor(input/2);}
	else{x=out(floor(input/2));}
	if((floor(input/3))>out(floor(input/3))){y=floor(input/3);}
	else{y=out(floor(input/3));}
	if((floor(input/4))>out(floor(input/4))){z=floor(input/4);}
	else{z=out(floor(input/4));}

	//out(floor(input/3))+out(floor(input/4))
	output=x+y+z;
	
	return output;

}

int main()
{
	long long unsigned int  input,x,y,x1,y1,z1;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	for (int k = 3; k <= 1000000; ++k)
	{
		if((floor(k/2))>arr[k/2]){x1=floor(k/2);}
		else{x1=arr[k/2];}
		if((floor(k/3))>arr[k/3]){y1=floor(k/3);}
		else{y1=arr[k/3];}
		if((floor(k/4))>arr[k/4]){z1=floor(k/4);}
		else{z1=arr[k/4];}
		arr[k]=x1+y1+z1;
		//cout<<"k is "<<k<<"arr value is"<<arr[k]<<endl;
	}
	//cin>>input;
	// int j =10;
	while(scanf("%llu",&input)!=EOF)
	{
		if(input<1000000){x=arr[input];}
		else{x=out(input);}


		// j--;
		// x=out(floor(input/2))+out(floor(input/3))+out(floor(input/4));
		// //if(input==EOF){return 0;}
		// //if(feof(stdin)){break;}
		if(x>input){cout<<x<<endl;}
		else{cout<<input<<endl;}
		// /if(j==0){break;}
		// //cin>>input;


	}
	return 0;
} 
 
