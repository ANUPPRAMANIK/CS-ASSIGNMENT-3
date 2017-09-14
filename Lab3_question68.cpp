#include<iostream>
using namespace std;
main() {
	long int a,b,c;
	int d=1,e,f;
	char g[100];
	cout<<" \nenter a decimal number ";
	cin>>a;
	c=a;
	while(c!=0)
	{
		f=c%16;
		if(f<10)
		f=f+48;
		else
		f=f+55;
		g[d++]=f;
		c=c/16;
		}
		cout<<a<<" \nequivalent hexadecimal number: ";
		for(e=d-1;e>0;e--)
		cout<<g[e];
		cout<<endl;
}
