/*
��������

��������
һ��������ĿҪ������뷶����
3 10
�������
����������������Ӧ�������

���ݹ�ģ��Լ��
��������������ÿһ�����ķ�Χ��
�������������int��ʾʱ���������*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int f(int k, int n){
	if(k == n || k == 0){
		return 1;
	}
	if(k > 0 && k < n){
		return f(k, n-1) + f(k-1, n-1);
	}
}
int main() {
	int k, n;
	cin >> k >> n;
	int num;
	num = f(k, n);
	cout << num;
    return 0;
}

