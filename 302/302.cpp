#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	int cases,input,start,end,startprev,endprev,levelstart,levelend,x,y;
	cin>>cases;
	for (int j = 0; j < cases; ++j)
	{
		start=end=1;
		cin>>input;
		x=y=input;
		if(input==1){start=1;end=1;}
		else if(input==2){start=2;end=1;}
		else{
			start=1;end=1;//startprev=1;endprev=2;
			levelstart=1;levelend=1;
			while(1){
				if(x<=levelstart){
					if(levelstart%2==1){start=x;break;}
					else{start=levelstart-x+1;break;}
				}

				else {
					
					x=x-levelstart;
					levelstart++;
				}
			}
			while(1){
				if(y<=levelend){
					if(levelend%2==0){end=y;break;}
					else{end=levelend-y+1;break;}
				}
				else {
					
					y=y-levelend;
					levelend++;
				}
			}
		}
		cout<<"TERM "<<input<<" IS "<<end<<"/"<<start<<endl;
	}
	return 0;
}