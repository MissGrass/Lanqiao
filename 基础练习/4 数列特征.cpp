#include<iostream>

using namespace std;

int main()
{
	int i,num,n,min=0,max=0,sum=0;
	
	cin >> n;
	cin >> max;
	min=max;
	sum+=max;
	for(i=1;i<n;i++)
	{
		cin >> num;
		if(num>=max)	max=num;
		if(num<=min)	min=num;	
		sum+=num;
	}
	cout << max << endl;
	cout << min << endl;
	cout << sum;

}
