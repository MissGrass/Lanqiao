#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	//freopen("text.txt","r",stdin);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int j = n - 1;
	int cnt = 0;//cnt����ͳ�ƽ����Ĵ���
	int flag = 0;//flag�ж��Ƿ��Ѿ���һ����������������ַ���
	for(int i = 0; i < j; i++) {//iָ���ͷ�����������ڶ����ַ�
		for(int k = j; k >= i; k--) {//kָ��Ӻ�����ǰһֱ��iѰ�Һ�s[i]��ͬ��s[k]
			if(k == i) {//����Ҳ�����ͬ��
				if(n % 2 == 0 || flag == 1) {//impossible���������
					cout << "Impossible";
					return 0;
				}
				flag = 1;
				cnt += n / 2 - i;
				//cout << cnt <<endl;
			} else if(s[k] == s[i]) {
				for(int l = k; l < j; l++) {
					swap(s[l], s[l+1]);//��s[k]����s[j]��
					cnt++;//ͳ�ƽ�������
				}
				j--;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}

