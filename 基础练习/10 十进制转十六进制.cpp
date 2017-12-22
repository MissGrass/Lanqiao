#include<iostream>

using namespace std;

void abc(int n);
int main()
{
	int n;
	
	cin >> n;
	printf("%x\n",n);
	if(n<10)
		cout << n;
	else if(n==10)	cout << "A";
	else if(n==11)	cout << "B";
	else if(n==12)	cout << "C";
	else if(n==13)	cout << "D";
	else if(n==14)	cout << "E";
	else if(n==15)	cout << "F";
	else 
		abc(n);
}

void abc(int n)
{
	
	int a,b;
	a=n/16;
	b=n%16;
	if(a>=16)	abc(a);
	else	cout << a;
	if(b<10)	cout << b; 
	if(b==10)	cout << "A";
	if(b==11)	cout << "B";
	if(b==12)	cout << "C";
	if(b==13)	cout << "D";
	if(b==14)	cout << "E";
	if(b==15)	cout << "F";
}
