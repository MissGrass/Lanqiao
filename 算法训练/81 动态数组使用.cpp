/*
�Ӽ��̶���n��������ʹ�ö�̬����洢����������������������ǵĺ���ƽ��ֵ�ֱ������
Ҫ�󾡿���ʹ�ú���ʵ�ֳ�����롣ƽ��ֵΪС����ֻ�������������֡�
��������: 
5 
3 4 0 0 2
�������:
9  1
��������: 
7
3 2 7 5 2 9 1
�������:
29  4
*/ 
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int num, sum, avg, g, i = 0;
	cin >> num;
	g = num;
	int *arr = new int[num];
	
	while(num){
		cin >> arr[i];
		i++;
		sum += arr[i-1];
		num--;
	}
	avg = sum / g;
	cout << sum << " "<< avg;
    return 0;
}

