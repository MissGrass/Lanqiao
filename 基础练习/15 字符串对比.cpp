/*��������
���������������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
����1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
����2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
����3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2����
	���� beijing �� BEIjing
����4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
��������ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
�����ʽ
�����������У�ÿ�ж���һ���ַ���
�����ʽ
��������һ�����֣������������ַ����Ĺ�ϵ���
��������
BEIjing
beiJing 
�������
3
*/ 
#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;
int main() {
	string a1, a2;
	int lena, lenb; 
	cin >> a1;
	cin >> a2;
	lena = a1.length();
	lenb = a2.length(); 
	if ( lena != lenb) {
		printf("1\n");
		return 0;
	}
		
	else if ( a1 == a2) {
		printf("2\n");
		return 0;
	}
		
	int flag = 1;
	for ( int i = 0; i <= lena; i++) {
		a1[i] = tolower(a1[i]);
		a2[i] = tolower(a2[i]);
		if ( a1[i] != a2[i])
			flag = 0;
	}
	if (flag == 1)
		cout << "3\n";
	else 
		cout << "4\n"; 

	return 0;
}

