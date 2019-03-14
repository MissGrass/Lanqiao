#include <iostream>
#include <cstring>
#include <algorithm>
 
using namespace std;

bool visit[12] = {0};
int n = 0;//计数
int check(){
	int x, y;
	int i, k;
	bool a[3][4] = {0};
	int b[5] = {0};//存放五格的坐标
	for(i = 0, k = 0; i < 12; i++){
		if(visit[i] == 1){
			b[k] = i;
			k++;
		}
	} 
	x = b[0]/4;//一维坐标映射成二维坐标	 
	y = b[0]%4;
	a[x][y] = 1;
	if(x+1<=2)	a[x+1][y] = 1;
	if(x-1>=0)	a[x-1][y] = 1;
	if(y+1<=3)	a[x][y+1] = 1;
	if(y-1>=0)	a[x][y-1] = 1;
	b[0] = -1;
	for(k = 0; k < 4; k++){
		for(i = 1;i < 5; i++){
			if(b[i] != -1){
				x = b[i]/4;
				y = b[i]%4;
				if(a[x][y] == 1){
					if(x+1 <= 2)	a[x+1][y] = 1;
					if(x-1 >= 0)	a[x-1][y] = 1;
					if(y+1 <= 3)	a[x][y+1] = 1;
					if(y-1 >= 0)	a[x][y-1] = 1;
					b[i] = -1;
				}
			}
		}
	}
	for(i = 1; i < 5; i++)
		if(b[i] != -1)
			return 0;//不连通 
	return 1;//连通 
}

int fun(int num, int cur){
	if(num > 5)
		return 0;
	if(num == 5 && check() == 1){
		n++;
		return 0;
	}
	int i;
	for(i = cur; i < 12; i++){
		if(visit[i] == 0){
			visit[i] = 1;
			fun(num+1,i+1);
			visit[i] = 0;
		}
	}
	return 0;
}
int main() {
	int num = 0, cur = 0;
	fun(num, cur);
	cout << n; 
    return 0;
}

