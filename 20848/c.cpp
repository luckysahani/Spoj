#include <iostream>
#include <math.h>
using namespace std;
// long long int number_of_non_zero_digits(long long int x)
// {
// 	int temp,digits=0;
// 	long long int y;
// 	while(x>0)
// 	{
// 		temp=x%10;
// 		x=x/10;
// 		if(temp!=0)
// 		{
// 			digits++;
// 		}
// 	}
// 	return digits;
// }	
int main() {
	long long int val[20];
	long long int start,end,x,y,temp,sum_x,sum_y,pow_x,pow_y;
	int testcases;
	cin>>testcases;
	//non zero digit odd-> alice wins
	//non zero digit even-> bob wins
	val[0]=9;//val[1]=18;
	for(int i=1;i<20;i++)
	{
		val[i]=pow(10,i+1)-(9*val[i-1]+pow(10,i)-val[i-1]);
		//cout<<val[i]<<endl;
	}
	for(int j=0;j<testcases;j++)
	{
		cin>>start;
		cin>>end;
		x=y=0;pow_x=pow_y=0;sum_x=sum_y=0;
		for (long long int i = start; i>0; i=i/10)
		{
			pow_x++;
			temp=i%10;
			if(pow_x==1){
				sum_x=temp;continue;
			}
			if(temp==1)
			{
				sum_x=sum_x+(temp*pow(10,pow_x) - (temp*val[pow_x-1] + pow(10,pow_x-1)-val[pow_x-1]))+1;
				continue;
			}
			sum_x=sum_x+(temp*pow(10,pow_x) - (temp*val[pow_x-1] + pow(10,pow_x-1)-val[pow_x-1]))+1;
		}
		for (long long int i = end; i>0; i=i/10)
		{
			pow_y++;
			cout<<"sum_y=="<<sum_y<<endl;
			temp=i%10;
			if(pow_y==1){
				sum_y=temp;continue;
			}
			if(temp==1)
			{
				sum_y=sum_y+(temp*pow(10,pow_y) - ((temp*10-1)*val[pow_y-1] + pow(10,pow_y-1)-val[pow_y-1]))+1;
				continue;
			}
			sum_y=sum_y+(temp*pow(10,pow_y) - ((temp-1)*val[pow_y-1] + pow(10,pow_y-1)-val[pow_y-1]))+1;
		}
		cout<<"Alice wins in "<<(sum_y-sum_x)<<endl;

	}
	
	return 0;
}