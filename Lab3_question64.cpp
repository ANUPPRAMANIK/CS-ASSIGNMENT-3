#include<iostream>
#include<cmath>
using namespace std;
main() {
	long a,b=0,c,d,e,f=0,g=0,h=1;
	cout<<" enter an octal number ";
	cin>>a;
	c=a;
	while(a>0)
	{
		d=a%10;
		f=f+d*pow(8,g);
		a=a/10;
		++g;
		}
		cout<<c<<" decimal form: "<<f;
}

