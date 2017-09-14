#include<iostream>
using namespace std;
main() {
	long int a,b=0,c,d,e=1;
	cout<<" \nenter the octal number(combination of digits 0 to 7) ";
	cin>>d;
	a=d;
	while(d>0)
	{
		c=d%10; 
		b=b+c*e;
		e=e*8;
		d=d/10;
		}
		long int f;
		int g=1,h,i;
		char j[100];
		f=b;
		while(f!=0)
		{
			i=f%16;
			if(i<10)
			i=i+48;
			else
			i=i+55;
			j[g++]=i;
			f=f/16;
			}
			cout<<a<<" \nequivalent hexadecimal number: ";
			for(h=g-1;h>0;h--)
			cout<<j[h];
			}
