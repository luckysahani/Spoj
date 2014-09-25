#include <iostream>
#include <math>
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
	long long int start,end,alice,bob,x;
	int testcases;
	cin>>testcases;
	//to calculate number of numbers with odd non-zero digit
	//non zero digit odd-> alice wins
	//non zero digit even-> bob wins
	// val[0]=9;val[1]=18;
	// for(int i=2;i<20;i++)
	// {
	// 	val[i]=9*val[i-1]+
	// }
	for(int j=0;j<testcases;j++)
	{
		//cout<<'enteres\n';
		// alice=bob=0;
		cin>>start;
		cin>>end;

		for(int i=start;i<=end;i++)
		{
			x=number_of_non_zero_digits(i);
			// cout<<"Number od non zero digits for "<<i<<"=="<<x<<endl;
			if(x%2==0){
				bob++;
			}
			else{
				alice++;
			}
			if(i%1000==0){
				//cout<<"Number odd non zero digits till "<<i<<"=="<<alice<<endl;
				// cout<<"Number even non zero digits till "<<i<<"=="<<bob<<endl;
			}
			// cout<<"Number odd non zero digits till "<<i<<"=="<<alice<<endl;
			// cout<<"Number even non zero digits till "<<i<<"=="<<bob<<endl;
			calc[i]=alice;
			calc2[i]=bob;
			
		}

		cout<<"Testcase ->"<<j+1<<endl;
		cout<<"Alice wins in "<<alice<<endl;
		cout<<"Bob wins in "<<bob<<endl;
	}
	
	return 0;
}