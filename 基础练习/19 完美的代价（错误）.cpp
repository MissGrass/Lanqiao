/*��������
���Ĵ�����һ��������ַ��������������Ҷ��ʹ����������һ���ġ�С������Ϊ���Ĵ����������ġ�
���ڸ���һ����������һ���ǻ��ĵģ�����������ٵĽ�������ʹ�øô����һ�������Ļ��Ĵ���
�����Ķ����ǣ������������ڵ��ַ�
����mamad
��һ�ν��� ad : mamda
�ڶ��ν��� md : madma
�����ν��� ma : madam (���ģ�������)
�����ʽ
��һ����һ������N����ʾ���������ַ����ĳ���(N <= 8000)
�ڶ�����һ���ַ���������ΪN.ֻ����Сд��ĸ
�����ʽ
������ܣ�������ٵĽ���������
�������Impossible
��������
5
mamad
�������
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
		cin >> t;//��ÿһ������������t�� 
		a[t]++;//���м��� 
		s[i] = t;//�洢�ַ� 
	}
	
	
	//impossible������������һ���ַ����ֵĴ�������������������n��ż������ô�����ܹ��ɻ���
	if(N % 2 == 0) {
		for( t = 'a'; t <= 'z'; t++) {
			if(a[t] % 2 == 1) {
				cout << "Impossible" << endl;
				return 0;
			}
		}
	}
	//���n�������������Ѿ���һ���ַ����ֵĴ��������������ˣ���ô�������һ���ַ��������������Ͳ����ܹ��ɻ��ġ�
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

