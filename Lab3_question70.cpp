#include<iostream>  
#include<string> 
using namespace std;
main()  {
	int a[22]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,1010,1011,1100,1101,1110,1111};
	char b[22]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','a','b','c','d','e','f'};
	char c[30];
	long long d=0,e;
	int f=0,g,h=0,i=1,j;
	cout<<" enter a hexadecimal number ";
	cin>>c;
	for(f=0;c[f]!='\0';f++)
	{
		for(g=0;g<22;g++)
		{
			if(b[g]==c[f])
			{
				d=d*10000+a[g];
				}
				}
				}
				int k,l=0,m=1,n;
				k=d;
				while(k>0)
				{
					n=k%10;
					l=l+n*m;
					m=m*2;
					k=k/10;
					}
					int o=0;
					f=1;
					while(l!=0)
					{
						n=l%8;
						l/=8;
						o+=n*f;
						f*=10;
						}
						cout<<" \nthe required octal digit is: "<<o;
}
