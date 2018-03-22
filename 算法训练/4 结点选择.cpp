/*问题描述
有一棵 n 个节点的树，树上每个节点都有一个正整数权值。
如果一个点被选择了，那么在树上和它相邻的点都不能被选择。求选出的点的权值和最大是多少？
输入格式
第一行包含一个整数 n 。
接下来的一行包含 n 个正整数，第 i 个正整数代表点 i 的权值。
接下来一共 n-1 行，每行描述树上的一条边。
输出格式
输出一个整数，代表选出的点的权值和的最大值。
样例输入
5
1 2 3 4 5
1 2
1 3
2 4
2 5
样例输出
12
样例说明
选择3、4、5号点，权值和为 3+4+5 = 12 。
数据规模与约定
对于20%的数据， n <= 20。
对于50%的数据， n <= 1000。
对于100%的数据， n <= 100000。
权值均为不超过1000的正整数。
*/
#include <iostream>
#include <cstring>
#include <algorithm>
#define N 100000

#define MAX(x, y)  ((x) > (y)?(x):(y))

using namespace std;

struct edge {
	int to;
	int next;
};
int tree[N];//树 

int weight[N];//权值 

edge edges[2*N];//边 

int d[N][2];

int len = 0;

void add(int x, int y) {
	edges[len].to = y;
	edges[len].next = tree[x];
	tree[x] = len++;
}

void dp(int root, int p) {
	if(tree[root] == -1) {
		d[root][0] = 0;
		d[root][1] = weight[root];
		return;
	}
	for(int i = tree[root]; i != -1; i = edges[i].next) {
		int child = edges[i].to;
		if(child == p)
			continue;
		if(!d[child][1])
			dp(child, root);
		d[root][0] += MAX(d[child][1], d[child][0]);
		d[root][1] += d[child][0];
	}
	d[root][1] += weight[root];
}
int main() {
	memset(tree, -1, sizeof(tree));//memset函数通常为新申请的内存做初始化工作，
	// 其返回值为指向S的指针。memset的作用是在一段内存块中填充某个给定的值，
	//它是对较大的结构体或数组进行清零操作的一种最快方法。 
	int n;//树的结点数 
	std::cin >> n;
	for(int i = 1; i <= n; i++) 
		std::cin >> weight[i];//输入权值 
	int x, y;
	for(int i = 0; i < n-1; i++) {
		std::cin >> x >> y;//边的两边结点 
		add(x, y);
		add(y, x);
	}
	
	dp(1, -1);
	
	int max = MAX(d[1][0], d[1][1]);
	
	std::cout << max << std::endl;
    return 0;
}






