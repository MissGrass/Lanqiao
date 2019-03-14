#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int fun(int a[]){
	if(a[0]-a[1] == 1 || a[0]-a[1] == -1 ||
	   a[0]-a[3] == 1 || a[0]-a[3] == -1 ||
	   a[0]-a[4] == 1 || a[0]-a[4] == -1 || 
	   a[0]-a[5] == 1 || a[0]-a[5] == -1)
		return 1;
	if(a[1]-a[2] == 1 || a[1]-a[2] == -1 ||
	   a[1]-a[4] == 1 || a[1]-a[4] == -1 ||
	   a[1]-a[5] == 1 || a[1]-a[5] == -1 || 
	   a[1]-a[6] == 1 || a[1]-a[6] == -1 )
		return 1;
	if(a[2]-a[5] == 1 || a[2]-a[5] == -1 || 
	   a[2]-a[6] == 1 || a[2]-a[6] == -1 )
		return 1;
	if(a[3]-a[4] == 1 || a[3]-a[4] == -1 ||
	   a[3]-a[7] == 1 || a[3]-a[7] == -1 ||
	   a[3]-a[8] == 1 || a[3]-a[8] == -1)
		return 1;
	if(a[4]-a[5] == 1 || a[4]-a[5] == -1 ||
	   a[4]-a[7] == 1 || a[4]-a[7] == -1 ||
	   a[4]-a[8] == 1 || a[4]-a[8] == -1 || 
	   a[4]-a[9] == 1 || a[4]-a[9] == -1)
		return 1;
	if(a[5]-a[6] == 1 || a[5]-a[6] == -1 ||
	   a[5]-a[8] == 1 || a[5]-a[8] == -1 ||
	   a[5]-a[9] == 1 || a[5]-a[9] == -1)
		return 1;
	if(a[6]-a[9] == 1 || a[6]-a[9] == -1)
		return 1;
	if(a[7]-a[8] == 1 || a[7]-a[8] == -1)
		return 1;
	if(a[8]-a[9] == 1 || a[8]-a[9] == -1)
		return 1;
	return 0;
}

int main() {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int i, n = 1, count = 0;
	for(i = 1;i < 11; i++)
		n *= i;
	for(i = 0;i < n; i++){
		next_permutation(a,a+10);//È«ÅÅÁĞ
		if(fun(a) == 0)
			count++; 
	}
	cout << count;
    return 0;
}

