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
	int inp,k;
	cin>>inp;
	while(inp!=0){k=inp*(inp+1)*(2*inp+1)/6;cout<<k<<endl;cin>>inp;}
	return 0;
} 
