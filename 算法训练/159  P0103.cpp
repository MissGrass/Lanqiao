/*
　从键盘输入一个大写字母，要求改用小写字母输出。
输入
　　A
输出
　　a*/
#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char a;
	cin >> a;
	putchar(tolower(a));
    return 0;
}

