/*
��������
������дһ��������������һ������������5��Ȼ������Ļ����ʾ���µ�ͼ�Σ�5��ʾ��������
����* * * * *
����* * * *
����* * *
����* *
����*
*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = n; i > 0; i--){
		for (int j = i; j > 0; j--){
			cout << "* ";
		}
//		if(i == 1)
//			break;
		cout << endl;
	}
    return 0;
}

