/*��������
��������ȡ�������ؾ���ı�ȡ��������ǰ������������ȡ���Ѿ�ȡ��������ת90�ȡ�һ��ʼλ�ھ������Ͻǣ��������¡�
�����ʽ
���������һ��������������200��������m, n����ʾ������к��С�������m��ÿ��n����������ʾ�������
�����ʽ
�������ֻ��һ�У���mn������Ϊ����������ȡ���õ��Ľ������֮����һ���ո�ָ�����ĩ��Ҫ�ж���Ŀո�
��������
3 3
1 2 3
4 5 6
7 8 9
�������
1 4 7 8 9 6 3 2 5
��������
3 2
1 2
3 4
5 6
�������
1 3 5 6 4 2
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int I, J, i, j;
	cin >> I >> J;
	int a[200][200];
	int bi = 0, bj = 0;
	int bJ = J-1, bI = I-1;
	
	for(i = 0; i < I; i++) {
		for(j = 0; j < J; j++) {
			cin >> a[i][j];
		}
	}
	int flag = 0;
	while(bi <= bI && bj <= bJ) {

		for(i = bi; i <= bI; i++){
			if(flag == 0)
				cout << a[i][bj];
			else 
				cout << " " << a[i][bj];
			flag = 1;
		}
		for(j = bj+1; j <= bJ; j++){
			cout << " " << a[bI][j];
		}
		for(i = bI-1; i >= bi; i--) {
			cout << " " << a[i][bJ];
		}
		for(j = bJ-1; j > bj; j--) {
			cout << " " << a[bi][j];
		}

		bi++;bj++;
		bI--;bJ--;
	}
	
	return 0;
}

