
#include <stdio.h>

#include <string.h>
#include <math.h>
//#include <stack>

int main()
{
	/* code */
	char x[100],g;
	int temp1,temp;string m;
	scanf("%s",&x);
	//printf("%s\n",x[0] );
	int  numbers[500];
	//int temp[100];
	char operators[500];
	for (int i = 0; i < strlen(x); ++i)
	{
		/* code */
		j=0;temp=0;
		while((x[i]<='9') && (x[i]>='0')){
			temp1=x[i]-'0';
			temp=(pow(10,j)*temp1)+temp;


			i++;j++;


		}
		printf("\number ==%d\n",temp);
		numbers.push(temp);
		g=x[i];
		if((g=="/")||(g=="+")||(g=="-")||(g=="*")||(g=="%")||(g=="(")||(g==")"))
		{
			operators.push(g);
			printf("\noperator ==%c\n",g);

		}
	}
	return 0;
}
