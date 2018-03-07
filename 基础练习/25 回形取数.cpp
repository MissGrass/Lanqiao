/*问题描述
　　回形取数就是沿矩阵的边取数，若当前方向上无数可取或已经取过，则左转90度。一开始位于矩阵左上角，方向向下。
输入格式
　　输入第一行是两个不超过200的正整数m, n，表示矩阵的行和列。接下来m行每行n个整数，表示这个矩阵。
输出格式
　　输出只有一行，共mn个数，为输入矩阵回形取数得到的结果。数之间用一个空格分隔，行末不要有多余的空格。
样例输入
3 3
1 2 3
4 5 6
7 8 9
样例输出
1 4 7 8 9 6 3 2 5
样例输入
3 2
1 2
3 4
5 6
样例输出
1 3 5 6 4 2
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int I, J, i, j;
	cin >> I >> J;
	int a[200][200];
	int bi = 0, bj = 0;
	int bJ = J-1, bI = I-1;
	
	for(i = 0; i < I; i++) {
		for(j = 0; j < J; j++) {
			cin >> a[i][j];
		}
	}
	int flag = 0;
	while(bi <= bI && bj <= bJ) {

		for(i = bi; i <= bI; i++){
			if(flag == 0)
				cout << a[i][bj];
			else 
				cout << " " << a[i][bj];
			flag = 1;
		}
		for(j = bj+1; j <= bJ; j++){
			cout << " " << a[bI][j];
		}
		for(i = bI-1; i >= bi; i--) {
			cout << " " << a[i][bJ];
		}
		for(j = bJ-1; j > bj; j--) {
			cout << " " << a[bi][j];
		}

		bi++;bj++;
		bI--;bJ--;
	}
	
	return 0;
}

