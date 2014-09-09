#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
// //int sum[10001];
// int calculate(int m,int n,int sum_m,int sum_n)
// {
// 	int p,temp1,temp2;
// 	temp1=4*sum_m/5;
// 	temp2=4*sum_n/5;
// 	p=(((2*m)+3+temp1)/((2*n)+3+temp2));
// 	//cout<<"m="<<m<<", n="<<n<<", sum_m=="<<sum_m<<", sum_n=="<<sum_n<<", temp1="<<temp1<<", temp2="<<temp2<<endl;
// 	cout<<p%10<<endl;
// 	return 0;
// }
// int calc(int m)
// {
// 	int k1,k2;
// 	k2=sum[10000];
// 	for (int i = 10000; i < m+1; ++i)
// 	{
// 		k1=3*k2+5*i;
// 		k2=k1;
// 	}
// 	return k1;
// }
int main()
{
	int testcases,k1;
	cin>>testcases;
	//sum[0]=0;
	int  n,m;
	// for (int i = 2; i < 10001; ++i)
	// {
	// 	sum[i-1]=3*sum[i-2]+5*(i-1);
	// 	//cout<<"sum["<<i-1<<"]=="<<sum[i-1]<<endl;
	// }
	//int out[10001],input;
	//out[1]=1;
	// for (long int i = 2; i < 10001; ++i)
	// {
	// 	out[i]=divisors(i*i*i)+out[i-1];
	// 	cout<<"out"
	// }
	for (int j = 0; j < testcases; ++j)
	{
		cin>>n>>m;
		k1=(m-n)%4;
		//cout<<"k1=="<<k1<<endl;
		if(k1==1){cout<<"3\n";}
		else if(k1==2){cout<<"9\n";}
		else if(k1==3){cout<<"7\n";}
		else{cout<<"1\n";}
		// if((n<=10000)&&(m<=10000))
		// {
		// 	calculate(m,n,sum[m],sum[n]);

		// }
		// else if((n>10000)&&(m<=10000))
		// {
		// 	calculate(m,n,sum[m],calc(n));
		// }
		// else if((n<=10000)&&(m>10000))
		// {
		// 	calculate(m,n,calc(m),sum[n]);
		// }
		// else
		// {
		// 	calculate(m,n,calc(m),calc(n));
		// }

		

	}
	return 0;
} 
 
