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
			if(c[a]=='0')
			d[a]='0';
			else
			{
				d[a]='1';
				e=1;
				}
				}
				else
				{
					if(c[a]=='0')
					d[a]='1';
					else
					d[a]='0';
					}
					}
					cout<<" \ntwo's complement: "<<d;
}
