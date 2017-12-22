#include<iostream>
#define N 1000 
using namespace std;

int main()
{
	int n,i,m,a[N];
	
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
	cin >> m;
	
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			cout << i+1;
			break;
		}
	}
	if(i==n)
			cout << "-1";
	return 0; 
 } 
