#include<iostream>
using namespace std;
main() {
	int a,b=0,c,d,e=1;
	cout<<" enter a decimal number ";
	cin>>a;
	c=a;
	while(a>0)
	{
		d=a%8;
		b=b+d*e;
		e=e*10;
		a=a/8;
		}
		cout<<c<<" \noctal form: "<<b;
}
