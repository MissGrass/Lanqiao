/*问题描述
给定一个n个顶点，m条边的有向图（其中某些边权可能为负，但保证没有负环）。
请你计算从1号点到其他点的最短路（顶点从1到n编号）。
输入格式
第一行两个整数n, m。
接下来的m行，每行有三个整数u, v, l，表示u到v有一条长度为l的边。
输出格式
共n-1行，第i行表示1号点到i+1号点的最短路。
样例输入
3 3
1 2 -1
2 3 -1
3 1 2
样例输出
-1
-2
数据规模与约定
对于10%的数据，n = 2，m = 2。
对于30%的数据，n <= 5，m <= 10。
对于100%的数据，1 <= n <= 20000，1 <= m <= 200000，-10000 <= l <= 10000，
保证从任意顶点都能到达其他所有顶点。
*/

#include<iostream>  
#include<cstdio>  
#include<cstring>  
#include<algorithm>  
using namespace std;  
struct data{  
    int to,next,w;  
}e[202401];  
int head[20501];  
int dis[20501];  
int ne;  
int n,m,bg,ed;  
int d[200001],t=0,w=1;  
void insert(int u,int v,int w)  
{  
    ne++;  
    e[ne].to=v;  
    e[ne].w=w;  
    e[ne].next=head[u];  
    head[u]=ne;  
}  
void spfa()  
{  
    dis[bg]=0;d[0]=bg;  
    int q;  
    while(t<w)  
    {  
        q=head[d[t]];  
        while(q!=0)  
        {  
            if(dis[e[q].to]>dis[d[t]]+e[q].w)  
            {  
            dis[e[q].to]=dis[d[t]]+e[q].w;  
            d[w++]=e[q].to;  
            }  
            q=e[q].next;  
        }  
        t++;  
    }  
}  
int main()  
{  
    memset(dis,0x3f3f3f3f,sizeof(dis));  
    bg=1;  
    scanf("%d%d",&n,&m);  
    for(int i=1;i<=m;i++)  
    {  
        int u,v,w;  
        scanf("%d%d%d",&u,&v,&w);  
        insert(u,v,w);  
    }  
    spfa();  
    for(int i=2;i<=n;i++)  
    printf("%d\n",dis[i]);  
    return 0;  
}
