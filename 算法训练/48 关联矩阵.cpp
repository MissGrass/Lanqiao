/*问题描述
　　有一个n个结点m条边的有向图，请输出他的关联矩阵。
输入格式
　　第一行两个整数n、m，表示图中结点和边的数目。n<=100,m<=1000。
　　接下来m行，每行两个整数a、b，表示图中有(a,b)边。
　　注意图中可能含有重边，但不会有自环。
输出格式
　　输出该图的关联矩阵，注意请勿改变边和结点的顺序。
样例输入
5 9
1 2
3 1
1 5
2 5
2 3
2 3
3 2
4 3
5 4
样例输出
1 -1 1 0 0 0 0 0 0
-1 0 0 1 1 1 -1 0 0
0 1 0 0 -1 -1 1 -1 0
0 0 0 0 0 0 0 1 -1
0 0 -1 -1 0 0 0 0 1*/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector> 
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector< vector<int> > a( n, vector<int>(m) );
	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x >> y;
		a[x-1][i] = 1;
		a[y-1][i] = -1;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

