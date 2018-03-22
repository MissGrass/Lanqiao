/*��������
��һ�� n ���ڵ����������ÿ���ڵ㶼��һ��������Ȩֵ��
���һ���㱻ѡ���ˣ���ô�����Ϻ������ڵĵ㶼���ܱ�ѡ����ѡ���ĵ��Ȩֵ������Ƕ��٣�
�����ʽ
��һ�а���һ������ n ��
��������һ�а��� n ������������ i ������������� i ��Ȩֵ��
������һ�� n-1 �У�ÿ���������ϵ�һ���ߡ�
�����ʽ
���һ������������ѡ���ĵ��Ȩֵ�͵����ֵ��
��������
5
1 2 3 4 5
1 2
1 3
2 4
2 5
�������
12
����˵��
ѡ��3��4��5�ŵ㣬Ȩֵ��Ϊ 3+4+5 = 12 ��
���ݹ�ģ��Լ��
����20%�����ݣ� n <= 20��
����50%�����ݣ� n <= 1000��
����100%�����ݣ� n <= 100000��
Ȩֵ��Ϊ������1000����������
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
int tree[N];//�� 

int weight[N];//Ȩֵ 

edge edges[2*N];//�� 

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
	memset(tree, -1, sizeof(tree));//memset����ͨ��Ϊ��������ڴ�����ʼ��������
	// �䷵��ֵΪָ��S��ָ�롣memset����������һ���ڴ�������ĳ��������ֵ��
	//���ǶԽϴ�Ľṹ�������������������һ����췽���� 
	int n;//���Ľ���� 
	std::cin >> n;
	for(int i = 1; i <= n; i++) 
		std::cin >> weight[i];//����Ȩֵ 
	int x, y;
	for(int i = 0; i < n-1; i++) {
		std::cin >> x >> y;//�ߵ����߽�� 
		add(x, y);
		add(y, x);
	}
	
	dp(1, -1);
	
	int max = MAX(d[1][0], d[1][1]);
	
	std::cout << max << std::endl;
    return 0;
}






