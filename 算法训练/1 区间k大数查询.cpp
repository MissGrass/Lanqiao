#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n, i, m, k;
	cin >> n;
	vector<int> ary(n);
	for(i=0;i<n;i++)
		cin >> ary[i];
	cin >> m;
	vector<int> result(m);
	for(i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b >> k;
		int *arry = new int [n];
		int j;
		for(j=0;j<n;j++)
			arry[j]=ary[j];
		sort(arry+a-1,arry+b,cmp);
		result[i]=arry[k+a-2];
		delete[] arry;
	}
	for(i=0;i<m;i++)
		cout << result[i] << endl;
}
