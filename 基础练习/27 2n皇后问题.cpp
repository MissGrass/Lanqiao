/*问题描述
给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，使任意的两个黑皇后都不在同一行、
同一列或同一条对角线上，任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
输入格式
输入的第一行为一个整数n，表示棋盘的大小。
接下来n行，每行n个0或1的整数，如果一个整数为1，表示对应的位置可以放皇后，如果一个整数为0，表示对应的位置不可以放皇后。
输出格式
输出一个整数，表示总共有多少种放法。
样例输入
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
2
样例输入
4
1 0 1 1
1 1 1 1
1 1 1 1
1 1 1 1
样例输出
0
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int cnt = 0;

bool issafe(vector< vector<int> > pic, vector<int> pos, int row) {
	for(int i = 0; i < row; i++) {
		if(pos[i] == pos[row] || abs(i - row) == abs(pos[i] - pos[row]))
			return false;
	}
	return true;
}

void blackdfs(vector< vector<int> > blackpic, vector<int> blackpos, int n, int blackrow) {
	if(blackrow == n) {
		cnt++;
		return;
	}
	for(blackpos[blackrow] = 0; blackpos[blackrow] < n; blackpos[blackrow]++) {
		if(blackpic[blackrow][blackpos[blackrow]] == 1 && issafe(blackpic, blackpos, blackrow)) {
			blackdfs(blackpic, blackpos, n, blackrow + 1);
		}
	}
}

void dfs(vector< vector<int> > pic, vector<int> pos, int n, int row) {
	if(row == n) {
		vector< vector<int> > blackpic(n, vector<int>(n));
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				blackpic[i][j] = pic[i][j];
			} 	
		}
		for(int i = 0; i < n; i++) {
			blackpic[i][pos[i]] = 0;
		}
		vector<int> blackpos(n);
		blackdfs(blackpic, blackpos, n, 0);
		return;
	}
	for(pos[row] = 0; pos[row] < n; pos[row]++) {
		if(pic[row][pos[row]] == 1 && issafe(pic, pos, row)) {
			dfs(pic, pos, n, row + 1);
		}
	}
	
}

int main() {
	int n;
	cin >> n;
	//**** 它能够像容器一样存放各种类型的对象，
	//简单地说，vector是一个能够存放任意类型的动态数组，能够增加和压缩数据。
	vector< vector< int > >pic(n, vector< int >(n));
	vector<int> pos(n);//****
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> pic[i][j];			
		}
	}
	//深度优先搜索 
	dfs(pic, pos, n, 0);
	
	cout << cnt;
	return 0;
	
}

