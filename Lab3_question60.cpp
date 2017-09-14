#include<iostream>
using namespace std;
main() {
	long a,b,c,d,e=0,f=0,g=1,h=1;
	cout<<" enter a binary number ";
	cin>>a;
	b=a;
	while(b>0)
	{
		c=b%10;
		e=e+c*g;
		g=g*2;
		b=b/10;
		}
		while(e>0)
		{
			d=e%8;
			f=f+d*h;
			h=h*10;
			e=e/8;
			}
			cout<<a<<" \noctal form: "<<f;
}
