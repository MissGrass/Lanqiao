/*��������
������һ��n�����m���ߵ�����ͼ����������Ĺ�������
�����ʽ
������һ����������n��m����ʾͼ�н��ͱߵ���Ŀ��n<=100,m<=1000��
����������m�У�ÿ����������a��b����ʾͼ����(a,b)�ߡ�
����ע��ͼ�п��ܺ����رߣ����������Ի���
�����ʽ
���������ͼ�Ĺ�������ע������ı�ߺͽ���˳��
��������
5 9
1 2
3 1
1 5
2 5
2 3
2 3
3 2
4 3
5 4
�������
1 -1 1 0 0 0 0 0 0
-1 0 0 1 1 1 -1 0 0
0 1 0 0 -1 -1 1 -1 0
0 0 0 0 0 0 0 1 -1
0 0 -1 -1 0 0 0 0 1*/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector> 
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector< vector<int> > a( n, vector<int>(m) );
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x-1][i] = 1;
		a[y-1][i] = -1;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

