#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int fun(int a[]){
	double A,B,C,DEF,GHI,x;
	A = a[0];
	B = a[1];
	C = a[2];
	DEF = a[3]*100 + a[4]*10 + a[5];
	GHI = a[6]*100 + a[7]*10 + a[8];
	x = A*1.0 + B*1.0/C + DEF*1.0/GHI;
	if (x==10.0)
		return 0;
	else
		return 1;
}
int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9};
	int i, n=1, count = 0;
	for(i = 1; i < 10; i++){
		n *= i;//n种排列可能 
	}
	for(i = 0; i < n; i++){//暴力破解 
		next_permutation(a,a+9);//全排列 
		if(fun(a) == 0)
			count++;
	}
	cout << count;
    return 0;
}

