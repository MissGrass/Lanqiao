/*
��������
���������������󣬷ֱ���m*s��s*n��С���������������˵Ľ����
�����ʽ
������һ�У��ո����������������m,s,n����������200����
����������m�У�ÿ��s���ո��������������ʾ����A��i��j����
����������s�У�ÿ��n���ո��������������ʾ����B��i��j����
�����ʽ
����m�У�ÿ��n���ո��������������������ľ���C��i��j����ֵ��
��������
2 3 2
1 0 -1
1 1 -3
0 3
1 2
3 1
�������
-3 2
-8 2

��ʾ
����CӦ����m��n�У�����C(i,j)���ھ���A��i�������������B��j�����������ڻ���
����������C(1,1)=(1,0,-1)*(0,1,3) = 1 * 0 +0*1+(-1)*3=-3*/ 
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int m, s, n, sum = 0;
	cin >> m >> s >> n;
	vector< vector<int> > A(m, vector<int>(s) );
	vector< vector<int> > B(s, vector<int>(n) );
	vector< vector<int> > C(m, vector<int>(n) );
	//������� 
	for (int i = 0; i < m; i++){
		for (int j = 0; j < s; j++){
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < s; i++){
		for (int j = 0; j < n; j++){
			cin >> B[i][j];
		}
	}
	//���� 
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			for (int k = 0; k < s; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	//���C���� 
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

