#include<iostream>
using namespace std;
main() {
	int a,b;
	char c[17],d[17];
	cout<<" enter a binary number(maximum 16 bits) ";
	cin>>c;
	for(a=0;c[a]!='\0';a++);
	for(b=0;b<a;b++)
	{
		if(c[b]=='0')
		d[b]='1';
		else
		d[b]='0';
		}
		cout<<" \none's comlplement: "<<d;
}
