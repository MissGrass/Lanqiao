/*
问题描述
　　编写一个程序，首先输入一个整数，例如5，然后在屏幕上显示如下的图形（5表示行数）：
　　* * * * *
　　* * * *
　　* * *
　　* *
　　*
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

