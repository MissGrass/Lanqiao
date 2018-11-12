/*
从键盘读入n个整数，使用动态数组存储所读入的整数，并计算它们的和与平均值分别输出。
要求尽可能使用函数实现程序代码。平均值为小数的只保留其整数部分。
样例输入: 
5 
3 4 0 0 2
样例输出:
9  1
样例输入: 
7
3 2 7 5 2 9 1
样例输出:
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

