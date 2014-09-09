#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
using namespace std;
int main()
{
	long double  t,inp1,j,inp2,temp,inp3[300],sum=0;inp3[0]=0;
	//  std::cout.setf( std::ios::fixed, std:: ios::floatfield ); // floatfield set to fixed

	for (int i = 2, j=2; i < 300; ++i,++j)
	{
		temp=double(1)/j;
		// temp = floorf(temp * 100) / 100;
		sum=temp;
		inp3[i-2]=sum;
		//cout<<"sum=="<<inp3[i-1]<<",k=="<<i-1<<endl;
	}
	cin>>inp1;int k=150;int i=0;
	while(inp1!=0.00)
	{
		 sum=0;
        for(i=0;i<295;i++)
         {
             sum+=inp3[i];//cout<<sum<<endl;
			 //temp = floorf(sum * 100) / 100;

             if(sum>=inp1)
                break;
        }
        printf("%d card(s)\n",i+1);
        //scanf("%f",&t);
		// k=150;
		// x:
		// if((inp1>inp3[k])&&(k!=0)){
		// 	if(inp1<=inp3[k+1]){cout<<k+1<<" card(s)"<<endl;goto z;}
		// 	//cout<<"k=="<<k<<"gone to x by 1\n";
		// 	if((k+k/2)>295){k=k+10;}
		// 	else if((k)>225){k=k+10;}
		// 	else{k=(k+(k/2));}
		// 	goto x;
		// }
		// else if((inp1<=inp3[k])&&(k!=0)){
		// 	if(inp1>inp3[k-1]){cout<<k<<" card(s)"<<endl;goto z;}
		// 	if(k>150){k=k-1;}
		// 	else{k=(k/2);}
		// 	//cout<<"k=="<<k<<"gone to x by 2\n";
		// 	goto x;

		// }
		// if(inp1==inp3[k]){cout<<k<<endl;}

		// //cout<<sum<<endl;

		cin>>inp1;


	}
	return 0;
} 
 
