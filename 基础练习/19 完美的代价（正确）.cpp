#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int N, i;
	char t;
	cin >> N ;
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
	int num = 0;//遇到几个单个字符 
	for(i = 1; i <= N; i++) {//从头遍历 
		for(j = (N+1-i+num); j >= i; j--) {//从尾遍历 
			int flag = 0;//标记 

			if(s[i] == s[j] && i != j) {//遇到不同的字符 
				flag = 1;
				for(k = j; k < N; k++) {
					if((i + k) == (N + 1 + num)) {
						break;
					}
					if((i + k) < (N + 1 + num))	{	
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
				num++;//遇到单个字符 
			}

		}
	}
	cout << cnt1 << endl;
	return 0;
}

