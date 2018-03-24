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

解题思路：

这题模型是树形动态规划入门题目，
dp[i][0]表示该节点不被选择，dp[i][1]表示该结点被选择。
转移方程为:
dp[u][1]+=dp[v][0];//选择了u结点，则与它邻接的结点不选；
dp[u][0]+=max(dp[v][0]，dp[v][1]);不选择u结点，则与它邻接的结点选择结果最大的；
应该特别注意：该题结点数量较大，应该选用邻接表存储边的关系
*/
#include<cstdio>  
#include<cstring>  
#define max(a,b) ((a)>(b)?(a):(b))  
#define maxn 100010  
bool vis[maxn];  
int dp[maxn][2];  
int father[maxn];  
int head[maxn];  
int n;  
int cnt;  
struct Edge  
{  
    int to,next;  
}edge[2*maxn];  
void add(int u,int v)  
{  
    edge[cnt].to=v;  
    edge[cnt].next=head[u];  
    head[u]=cnt++;  
}  
void treedp(int u)  
{  
    vis[u]=1;  
    for(int i=head[u];i!=-1;i=edge[i].next)  
    {  
        int v=edge[i].to;  
        if(!vis[v])  
        {  
            treedp(v);  
            dp[u][1]+=dp[v][0];  
            dp[u][0]+=max(dp[v][1],dp[v][0]);  
        }  
    }  
}  
void init()  
{  
    cnt=0;  
    //memset(void *s,int ch,size_t n);
	//将s中当前位置后面的n个字节用ch替换并返回s 
    memset(dp,0,sizeof(dp)); 
    memset(father,0,sizeof(father));  
    memset(vis,0,sizeof(vis));  
    memset(head,-1,sizeof(head));  
}  
int main()  
{  
    init();  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
  	  scanf("%d",&dp[i][1]);  
    int root=0;  
    int begin=1;  
    for(int i=0;i<n-1;i++)  
    {  
        int a,b;  
        scanf("%d%d",&a,&b);  
        add(a,b);  
        add(b,a);  
        father[b]=a;  
        if(root==b||begin)  
        {  
            root=a;  
        }  
    }  
      
    while(father[root])  
  		root=father[root];  
    treedp(root);  
    int ans;  
    ans=max(dp[root][0],dp[root][1]);  
    printf("%d\n",ans);  
}  






