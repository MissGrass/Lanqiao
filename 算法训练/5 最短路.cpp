/*��������
����һ��n�����㣬m���ߵ�����ͼ������ĳЩ��Ȩ����Ϊ��������֤û�и�������
��������1�ŵ㵽����������·�������1��n��ţ���
�����ʽ
��һ����������n, m��
��������m�У�ÿ������������u, v, l����ʾu��v��һ������Ϊl�ıߡ�
�����ʽ
��n-1�У���i�б�ʾ1�ŵ㵽i+1�ŵ�����·��
��������
3 3
1 2 -1
2 3 -1
3 1 2
�������
-1
-2
���ݹ�ģ��Լ��
����10%�����ݣ�n = 2��m = 2��
����30%�����ݣ�n <= 5��m <= 10��
����100%�����ݣ�1 <= n <= 20000��1 <= m <= 200000��-10000 <= l <= 10000��
��֤�����ⶥ�㶼�ܵ����������ж��㡣
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
