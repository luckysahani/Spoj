#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int k;
	for (int i = 0; i < 10000; ++i)
	{
		k=(rand()%100000)+10000;
		printf("%d\n",k );
	}

}
