/*��������
�������ڸ�����������a[],Ѱ���������ֵ���������±ꡣ
�����ʽ
������������a[],����Ԫ�ظ���С��1����100��������ݷ������У���һ��ֻ��һ��������ʾ����Ԫ�ظ������ڶ���Ϊ����ĸ���Ԫ�ء�
�����ʽ
����������ֵ�������±�
��������
3
3 2 1

�������
3 0
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int a[100];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0];
	int num = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
			num = i;
		}
	}
	cout << max << " " << num << endl;
    return 0;
}

