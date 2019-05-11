/*
问题描述

样例输入
一个满足题目要求的输入范例。
3 10
样例输出
与上面的样例输入对应的输出。

数据规模和约定
　　输入数据中每一个数的范围。
　　例：结果在int表示时不会溢出。*/
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

