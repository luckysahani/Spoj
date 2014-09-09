#include <stdio.h>

void swap_values(float *m,float *n) //This function is used to swap two values
{
  float temporary;                // To store one variable in temporaryorary variable and change its value
  temporary=*m;
  *m=*n;
  *n=temporary;                   // finally assign the temporary. variable to second variable
}
int main(void) {
	int n;                   // to recieve the order of matrix
	scanf("%d",&n);          // scan the n value
	float matrix[n][n+1];       // declare n*n+1 to scan augmented matrix 
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
			{
				scanf("%f",&matrix[i][j]);   // scanning each value of matrix
			}
	}
	float sum,maximum;
	int l,m,pivot;
	for(i=0;i<n-1;i++)
	{
        maximum=matrix[i][i];     // assume the current pivot to have maximum value       
		pivot=i;                  
		for(l=i;l<n;l++)
		{
			if(matrix[l][i]>maximum)        // compare the maximum value with all the value in that column
			 {
			 	maximum=matrix[l][i];
			 	pivot=l;             //pivot is to store the row index of maximum. pivot value
			 }
		}
		for(m=0;m<n+1;m++)
		{
			swap_values(&matrix[i][m],&matrix[pivot][m]);    // interchange the current row with maximum pivot row
		}
		for(j=i+1;j<n;j++)
		{
			sum=(matrix[j][i])/(matrix[i][i]);
			
			for(k=i;k<=n;k++)
			{
				matrix[j][k]=matrix[j][k]-(matrix[i][k]*sum);  // this is to make all elements 0
			}                                         // in the pivot column
		}
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		 {
		 	printf("%f ",matrix[i][j]);   // this comment is to print the upper triangular matrix  
		 }
		 printf("\n");
	}*/
	int count=1;
	for(i=0;i<n;i++)
	{
		if(matrix[i][i]==0 && matrix[i][n]==0)
		 {
		 	printf("There exists infinitely many solutions");      // if any full row is 0 then 
		 	count=0;                                   //there are infnitely many solutions
		 	break;
		 }
		 if(matrix[i][i]==0 && matrix[i][n]!=0)
		 {
		 	printf("There are no solutions");                   //if all elemnts are 0 except the last element
		 	count=0;                                   // then there exist no such solution
		 	break;
		 }
	}
	
	float temporary;
	matrix[n-1][n-1]=matrix[n-1][n]/matrix[n-1][n-1];          // this is to calculate the last value
	for(i=n-2;i>=0;i--)
	{
		temporary=matrix[i][n];
		for(j=n-1;j>i;j--)
		{
			temporary=temporary-matrix[i][j]*matrix[j][j];     // temporary is to store the current value 
		}
		matrix[i][i]=temporary/matrix[i][i];              // divide the index by the value at that value
	}
	for(i=0;i<n && count==1;i++)
	{
		printf("Value of x[%d] is: %f\n",i+1,matrix[i][i]);  // print all the value
	}
	return 0;
}
