/*问题描述
回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。小龙龙认为回文串才是完美的。
现在给你一个串，它不一定是回文的，请你计算最少的交换次数使得该串变成一个完美的回文串。
交换的定义是：交换两个相邻的字符
例如mamad
第一次交换 ad : mamda
第二次交换 md : madma
第三次交换 ma : madam (回文！完美！)
输入格式
第一行是一个整数N，表示接下来的字符串的长度(N <= 8000)
第二行是一个字符串，长度为N.只包含小写字母
输出格式
如果可能，输出最少的交换次数。
否则输出Impossible
样例输入
5
mamad
样例输出
3
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	//freopen("text.txt","r",stdin);
	int N, i;
	char t;
	cin >> N;
	int a[8000];
	string s;
	for( i = 0; i < N; i++ ) {
		a[i] = 0;
	}
	for( i = 1; i <= N; i++ ) {
		cin >> t;//把每一个数读到变量t中 
		a[t]++;//进行计数 
		s[i] = t;//存储字符 
	}
	
	
	//impossible的情况：如果有一个字符出现的次数是奇数次数，而且n是偶数，那么不可能构成回文
	if(N % 2 == 0) {
		for( t = 'a'; t <= 'z'; t++) {
			if(a[t] % 2 == 1) {
				cout << "Impossible" << endl;
				return 0;
			}
		}
	}
	//如果n是奇数，但是已经有一个字符出现的次数是奇数次数了，那么如果又有一个字符是奇数次数，就不可能构成回文。
	int cnt = 0;
	if(N % 2 == 1) {
		for( t = 'a'; t <= 'z'; t++ ) {
			if(a[t] % 2 == 1) {
				cnt++;
				if(cnt == 2) {
					cout << "Impossible" << endl;
					return 0;
				}
			}
		}
	}
	int j;
	int k;
	int cnt1;
	
	for(i = 1; i <= N; i++) {
		for(j = (N+1-i); j >= i; j--) {
			int flag = 0;

			if(s[i] == s[j] && i != j) {
				flag = 1;
				for(k = j; k < N; k++) {
					if((i + k) == (N + 1)) {
						break;
					}
					if((i + k) < (N + 1))	{	
						//cout << cnt1 << " "<< "1" << i << k << (i+k) << endl;
						swap(s[k],s[k+1]);
						cnt1++;
					}		
				} 
			} 
			if(flag == 1) {
				break;
			}
			if (j == i){
				cnt1 += (N / 2 - i + 1);
			}
		}
	}
	cout << cnt1 << endl;
	return 0;
}

