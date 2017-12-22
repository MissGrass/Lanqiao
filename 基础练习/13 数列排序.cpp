#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a,int b)
{
	return a<b;
}

int main()
{
	int n,i;
	cin >> n;
	int a[200];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n,cmp);
	cout << a[0];
	for(i=1;i<n;i++)
		cout << " " << a[i];
	return 0;
 } 
