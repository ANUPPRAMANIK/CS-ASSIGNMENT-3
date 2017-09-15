#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int a(char b[]) {
	int c,d,e=0;
	for(d=0;b[d]!='\0';d++);
	for(c=0;b[c]!='\0';c++,d--)
	{
		if(b[c]>='0'&&b[c]<='9')
		e=e+(b[c]-'0')*pow(16,d-1);
		if(b[c]>='A'&&b[c]<='F')
		e=e+(b[c]-55)*pow(16,d-1); 
		if(b[c]>='a'&&b[c]<='f') 
		e=e+(b[c]-87)*pow(16,d-1);
		}
		return e;
		}
main() {
	char b[20],c; 
	int n;
	cout<<" enter a hexadecimal number ";
	cin>>b;
	cout<<" \nequivalent decimal value: "<<a(b);
	return 0;
}
