/*��������
FJ��ɳ����д������һЩ�ַ�����
A1 = ��A��
A2 = ��ABA��
A3 = ��ABACABA��
A4 = ��ABACABADABACABA��
�� ��
�����ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ
����һ������N �� 26��
�����ʽ
�������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����
��������
3
�������
ABACABA
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string dfs(int n) {
	if(n == 1) {
		return  "A";
	}else{
		return dfs(n - 1) + (char)(n + 'A' - 1) + dfs(n - 1);
	} 
}
int main() {
	int n;
	cin >> n;
	cout << dfs(n);
	return 0;
}

