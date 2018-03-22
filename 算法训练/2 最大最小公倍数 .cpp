/*问题描述
已知一个正整数N，问从1~N中任选出三个数，他们的最小公倍数最大可以为多少。
输入格式
输入一个正整数N。
输出格式
输出一个整数，表示你找到的最小公倍数。
样例输入
9
样例输出
504
数据规模与约定
1 <= N <= 106。
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	long long n,ads;
	cin >> n;

	if(n <= 2)
		ads = n;
	else if(n % 2 == 1)
		ads = n*(n-1)*(n-2);
	else if(n % 3 != 0)
		ads = n*(n-1)*(n-3) ;
	else
		ads = (n-1)*(n-2)*(n-3);
	cout << ads << endl;
    return 0;
}

