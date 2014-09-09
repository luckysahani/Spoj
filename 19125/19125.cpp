#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;
//const long double PI = std::atan(1.0)*4;
char hexadecimal(int x)
{
	char ch;
	//if(x<10){return x;}
	switch(x)
    {
        case 10:
          ch =  'A';
          break;
        case 11:
          ch =  'B';
          break;
        case 12:
          ch =  'C';
          break;
        case 13:
          ch =  'D';
          break;
        case 14:
          ch =  'E';
          break;
        case 15:
          ch =  'F';
          break;
        
    }
    return ch;
}
long double sum(double j,double d)
{
	long double sum=0,temp;
	for (double k = 0; k < d+1; ++k)
	{
		temp=(fmod(pow(16,d-k),(8*k)+j)/(8*k+j));
		sum=sum+temp;
	}
	if(fmod(sum,1)<0){sum=1+fmod(sum,1.0);}
	else {sum=fmod(sum,1.0);}
	// for (double k = d+1; k < 2*d; ++k)
	// {
	// 	sum=sum+pow(16,d-k)/(8*k+j);
	// }
	cout<<"sum=="<<sum<<endl;
	return sum;
}
int main()
{
	double input,x,y,z,testcases,digit,output;
	char ch;
	double x1,x4,x5,x6,out;
	cin>>testcases;
	for (int j = 0; j < testcases; ++j)
	{
		cin>>input;
		if(input==1){cout<<"3";continue;}
		if(input==2){cout<<"2";continue;}
		digit=input-2;
		x1=sum(1,digit);
		x4=sum(4,digit);
		x5=sum(5,digit);
		x6=sum(6,digit);

		out=fmod(((4*x1)-(2*x4)-(x5)-(x6)),1);
		if(fmod(out,1)<0){out=1+fmod(out,1.0);}
		else {out=fmod(out,1.0);}
		cout<<"input to be converted multiplied by 16 "<<out<<endl;
		output=16*out;
		// if(fmod(output,1)<0){output=1+fmod(output,1.0);}
		// else {output=fmod(output,1.0);}
		output=output-fmod(output,1);
		cout<<"input to be converted to char "<<output<<endl;

		if(output<10){cout<<output<<endl;continue;}
		ch=hexadecimal(output);
		cout<<ch<<endl;



	}
	


	// long double PI = atan(1.0)*4000000;
	// cout<<std::fixed << std::setprecision(1000) <<PI<<endl;
	// cout<<std::fixed << std::setprecision(0) <<M_PI*1000000<<endl;
	// //printf("%lf",M_PI);
	// //cout<<std::fixed << std::setprecision(2000) <<PI<<endl;

	return 0;
} 
 
