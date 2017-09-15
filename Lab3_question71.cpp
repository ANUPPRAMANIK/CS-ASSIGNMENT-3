#include<iostream>
using namespace std;
main() {
	int a,b;
	char c[17],d[17];
	int e=0;
	cout<<" enter a binary number(maximum 16 bits) ";
	cin>>c;
	for(a=0;c[a]!='\0';a++);
	for(b=(a-1);b>=0;b--)
	{
		if(e==0)
		{
			if(c[b]=='0')
			d[b]='0';
			else
			{
				d[b]='1';
				e=1;
				}
				}
				else
				{
					if(c[b]=='0')
					d[b]='1';
					else
					d[b]='0';
					}
					}
					cout<<" \ntwo's complement: "<<d;
					return 0;
					}
