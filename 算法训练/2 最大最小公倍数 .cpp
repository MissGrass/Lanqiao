/*��������
��֪һ��������N���ʴ�1~N����ѡ�������������ǵ���С������������Ϊ���١�
�����ʽ
����һ��������N��
�����ʽ
���һ����������ʾ���ҵ�����С��������
��������
9
�������
504
���ݹ�ģ��Լ��
1 <= N <= 106��
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

