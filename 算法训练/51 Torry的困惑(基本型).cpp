/*��������
����Torry��Сϲ����ѧ��һ�죬��ʦ����������2��3��5��7����������������������TorryͻȻ�뵽һ�����⣬
ǰ10��100��1000��10000�����������ĳ˻��Ƕ����أ�����������������ʦ����ʦ�ס�ˣ�һʱ�ش𲻳�����
����Torry�����ڻ��̵��㣬�������ǰn�������ĳ˻������������ǵ���ŽӴ���̲��ã�
TorryֻҪ����������ģ��50000��ֵ��
�����ʽ
����������һ��������n������n<=100000��
�����ʽ
�������һ�У���ǰn�������ĳ˻�ģ50000��ֵ��
��������
1

�������
2
*/
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
bool isprim(int n);
using namespace std;
int main() {
	int sum = 1;
	int n;
	cin >> n;
	for (int i = 2; ; i++){
		if(isprim(i)){
			sum *= i;
			if(--n == 0)
				break;
		}
	}
	sum = sum % 50000;
	cout << sum;
	
    return 0;
}

bool isprim(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
