#include<iostream>

using namespace std;

int main()
{
	int n,a,b,c;
	
	cin >> n;
	
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(a+b+c+b+a==n)
					cout << a << b << c << b << a << endl;
			}
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(a*2+b*2+c*2==n)
					cout << a << b << c << c << b << a <<endl; 
			 } 
	return 0;
}
