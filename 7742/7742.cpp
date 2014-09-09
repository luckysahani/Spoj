 
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
	long long unsigned int ans,inp1,inp2,x,y;//Lf
	scanf("%llu",&inp1);
	long long unsigned int arr[inp1]; 
	for (int l = 0; l < inp1; ++l)
	{
		scanf("%llu",&arr[l]);
	}
	inp2=arr[0];
	for (int i = 1; i < inp1; ++i)
	{
		ans=inp2^arr[i];
		inp2=ans;
		/* code */
	}
	printf("%llu\n",ans );
}
