#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <limits>
using namespace std;
int move_ghoda_from_x1y1_x3y3(int x1,int y1,int x3,int y3)
{
	if(x1<0 || y1<0 || x3<0 || y3<0 )
	{
		return 1000000000;
	}
	if((x3-x1==2)&&(y3-y1==1))
	{
		return 1;
	}
	else if((x3-x1==2)&&(y3-y1==-1))
	{
		return 1;
	}
	else if((x3-x1==-2)&&(y3-y1==1))
	{
		return 1;
	}
	else if((x3-x1==-2)&&(y3-y1==-1))
	{
		return 1;
	}
	else if((x3-x1==1)&&(y3-y1==-2))
	{
		return 1;
	}
	else if((x3-x1==1)&&(y3-y1==2))
	{
		return 1;
	}
	else if((x3-x1==-1)&&(y3-y1==-2))
	{
		return 1;
	}
	else if((x3-x1==-1)&&(y3-y1==2))
	{
		return 1;
	}
	int a1=move_ghoda_from_x1y1_x3y3(x1+2,y1+1,x3,y3);
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+2,y1-1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-2,y1+1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-2,y1-1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-1,y1+2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+1,y1+2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-1,y1-2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+1,y1-2,x3,y3));
	return 1+a1;
}
int ghoda_moves_out(int x1,int y1,int x2, int y2,int x3,int y3)
{
	int a1;
	int moves_ghoda,moves_hathi,moves_mantri;
	//hathi case
	if((x2==x1)||(y2==y1))
	{
		moves_hathi=1;
	}
	else
	{
		moves_hathi=2;
	}
	//mantri case
	if((x3-x2)==(y3-y2) || (x3+y3)==(x2+y2))
	{
		moves_mantri=1;
	}
	else
	{
		moves_mantri=2;
	}
	//ghoda case
	a1=move_ghoda_from_x1y1_x3y3(x1+2,y1+1,x3,y3);
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+2,y1-1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-2,y1+1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-2,y1-1,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-1,y1+2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+1,y1+2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1-1,y1-2,x3,y3));
	a1=min(a1,move_ghoda_from_x1y1_x3y3(x1+1,y1-2,x3,y3));
	int sum_of_moves=moves_mantri+moves_hathi+a1+1;
	return sum_of_moves;

}
int hathi_moves_out(int x1,int y1,int x2, int y2,int x3,int y3)
{
	//hathi case
	int moves_ghoda,moves_hathi,moves_mantri;
	if((x2==x1)||(y2==y1))
	{
		moves_hathi=2;
	}
	else
	{
		moves_hathi=2;
	}
	//mantri case
	if((x3-x2)==(y3-y2) || (x3+y3)==(x2+y2))
	{
		moves_mantri=1;
	}
	else
	{
		moves_mantri=2;
	}
	//ghoda case
	moves_ghoda=move_ghoda_from_x1y1_x3y3(x1,y1,x3,y3);
	int sum_of_moves=moves_mantri+moves_hathi+moves_ghoda;
	return sum_of_moves;

}
int mantri_moves_out(int x1,int y1,int x2, int y2,int x3,int y3)
{
	//hathi case
	int moves_ghoda,moves_hathi,moves_mantri;
	if((x2==x1)||(y2==y1))
	{
		moves_hathi=1;
	}
	else
	{
		moves_hathi=2;
	}
	//mantri case
	if((x3-x2)==(y3-y2) || (x3+y3)==(x2+y2))
	{
		moves_mantri=2;
	}
	else
	{
		moves_mantri=2;
	}
	//ghoda case
	moves_ghoda=move_ghoda_from_x1y1_x3y3(x1,y1,x3,y3);
	int sum_of_moves=moves_mantri+moves_hathi+moves_ghoda;
	return sum_of_moves;

}
int min(int a , int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	long long int testcases,x1,x3,x2,y1,y2,y3,moves_hathi,moves_mantri,moves_ghoda,total=0,ghoda,hathi,mantri;
	cin>>testcases;
	for (int j = 0; j < testcases; ++j)
	{
		moves_ghoda=moves_mantri=moves_hathi=0;
		total=0;
		scanf("%llu%llu%llu%llu%llu%llu",&x1,&y1,&x2,&y2,&x3,&y3);
		//wrong case
		if((x3+y3-x2-y2)%2!=0)
		{
			cout<<"-1"<<endl;continue;
		}
		ghoda=ghoda_moves_out(x1,y1,x2,y2,x3,y3);
		hathi=hathi_moves_out(x1,y1,x2,y2,x3,y3);
		mantri=mantri_moves_out(x1,y1,x2,y2,x3,y3);
		total=min(min(ghoda,hathi),mantri);
		cout<<total<<endl;


	}
	return 0;
}