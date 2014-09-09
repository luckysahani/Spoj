#include <iostream>
#include <math.h>
using namespace std;
int main(){
long long unsigned int inp,cases,x,y,k,k2;cin>>cases;
for (int l = 0; l < cases; ++l){cin>>x>>y;
if(fmod(y,4)==0){k=fmod(pow(x,4),10);}
else {k=fmod(pow(x,y%4),10);}
if(fmod(y,2)==0){k2=fmod(pow(x,2),10);}
else{k2=fmod(x,10);}
if(y==0){cout<<"1\n";}
else if((x==20)||(x==10)||(x==0)){cout<<"0\n";}
else if((x==2)||(x==12)){cout<<k<<endl;}
else if((x==3)||(x==13)){cout<<k<<endl;}
else if((x==4)||(x==14)){cout<<k2<<endl;}
else if((x==7)||(x==17)){cout<<k<<endl;}
else if((x==8)||(x==18)){cout<<k<<endl;}
else if((x==19)||(x==9)){cout<<k2<<endl;}
else{cout<<x%10<<endl;}
}
return 0;
}