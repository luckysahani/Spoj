#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;
int sumfact(int inp)
{
	int inp1=inp,k1=inp,k2=1,sum=0;
	for (int i = 1; (i <= k1) && (i>=k2) && (k1>=k2); ++i)
	{
		if((inp%i)==0){sum=sum+(inp/i)+i;k2=i;k1=(inp/i);}
	}
	return sum-sqrt(inp);
}
int prime(int inp)
{
	int i1,i2,i3;
	if((inp%2==0)||(inp%3==0)||(inp%5==0)){return 0;}
	for (int i = 2; i <= sqrt(inp); ++i)
	{
		if(inp%i==0){return 0;}

	}
	return 1;
}
int main()
{
	int range,output,sumfactors,count,exit2,exit1,val1,val2,temp3,count1=0;float temp,i1;
	scanf("%d",&range);
	int start[range],end[range],out[50];
	for (int i = 0; i < range; ++i)
	{
		scanf("%d%d",&start[i],&end[i]);
		count=0;
		val1=-1;val2=-1;exit1=0;exit2=0;
		//printf("start==%d,end==%d\n",start[i],end[i] );
		for (  i1 = start[i]; (i1 <= end[i])&&(exit1==0); ++i1)
		{
			temp=sqrt(i1);
			//printf("sqrt==%f,temp==%f,temp-floor(temp)=%f\n",sqrt(i1),temp,temp-floor(temp) );
			if((temp-floor(temp))==0){val1=sqrt(i1);exit1=1;}
		}
		for (  i1 = end[i]; (i1 >= start[i])&&(exit2==0); --i1)
		{
			temp=sqrt(i1);
			//printf("sqrt==%f,temp==%f,temp-floor(temp)=%f\n",sqrt(i1),temp,temp-floor(temp) );
			if((temp-floor(temp))==0){val2=sqrt(i1);exit2=1;}
		}
		//temp=val2-val1;
		count=0;count1=0;
		out[0]=2;
		for (int l = 3; l <= 1500; ++l)
		{
			sumfactors=sumfact((l*l));
			temp3=prime(sumfactors);
			if(temp3==1)
			{count=count+1;out[count]=l*l;}
			//printf("sum of factors of %d is %d,and prime value is %d\n",l*l,sumfactors,temp3);
		}
		for (int m = 0; m < count; ++m)
		{
			if((out[m]>start[i])&&(out[m]<end[i])){count1=count1+1;}
			//printf("%d ,",out[m] );
		}
		printf("%d\n",count1 );
		//printf("startvar==%d,endvar==%d\n",val1,val2 );
		/*if((start[i]==2)&&(end[i]<=3)){printf("%d\n",1 );}
		else if((end[i]==1)&&(start[i]==1)){printf("%d\n",0 );}
		else if((end[i]==2)||(end[i]==3)){printf("%d\n",1 );}
		else if((start[i]==1)&&(end[i]<=3)){printf("%d\n",1 );}
		else if(start[i]==2){printf("%d\n",count+1 );}
		else{printf("%d\n",count );}*/
	}


}