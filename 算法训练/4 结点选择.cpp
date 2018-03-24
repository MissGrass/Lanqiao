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

����˼·��

����ģ�������ζ�̬�滮������Ŀ��
dp[i][0]��ʾ�ýڵ㲻��ѡ��dp[i][1]��ʾ�ý�㱻ѡ��
ת�Ʒ���Ϊ:
dp[u][1]+=dp[v][0];//ѡ����u��㣬�������ڽӵĽ�㲻ѡ��
dp[u][0]+=max(dp[v][0]��dp[v][1]);��ѡ��u��㣬�������ڽӵĽ��ѡ�������ģ�
Ӧ���ر�ע�⣺�����������ϴ�Ӧ��ѡ���ڽӱ�洢�ߵĹ�ϵ
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
	//��s�е�ǰλ�ú����n���ֽ���ch�滻������s 
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






