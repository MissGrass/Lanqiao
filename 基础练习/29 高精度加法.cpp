/*问题描述
　　输入两个整数a和b，输出这两个整数的和。a和b都不超过100位。
算法描述
　　由于a和b都比较大，所以不能直接使用语言中的标准数据类型来存储。对于这种问题，一般使用数组来处理。
　　定义一个数组A，A[0]用于存储a的个位，A[1]用于存储a的十位，依此类推。同样可以用一个数组B来存储b。
　　计算c = a + b的时候，首先将A[0]与B[0]相加，如果有进位产生，则把进位（即和的十位数）存入r，
把和的个位数存入C[0]，即C[0]等于(A[0]+B[0])%10。然后计算A[1]与B[1]相加，这时还应将低位进上来的值r也加起来，
即C[1]应该是A[1]、B[1]和r三个数的和．如果又有进位产生，则仍可将新的进位存入到r中，和的个位存到C[1]中。
依此类推，即可求出C的所有位。
　　最后将C输出即可。
输入格式
　　输入包括两行，第一行为一个非负整数a，第二行为一个非负整数b。两个整数都不超过100位，两数的最高位都不是0。
输出格式
　　输出一行，表示a + b的值。
样例输入 
20100122201001221234567890
		  2010012220100122
样例输出
20100122203011233454668012
*/#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	string a;
	string b;
	int A[100] = {0};
	int B[100] = {0};
	int C[101] = {0};
	cin >> a >> b; 
	int lena = a.length();
	int lenb = b.length();
//	cout << lena << " " <<lenb;
	int ja = a.length();
	int jb = b.length();
	for(int i = 0; i < lena; i++) {
		A[i] = a[--ja] - '0';
	}
	for(int i = 0; i < lenb; i++) {
		B[i] = b[--jb] - '0';
	}
	
	int r = 0;
	for(int i = 0; i < 100; i++) {
		C[i] = A[i] + B[i] + r;
		r = C[i] / 10;
		C[i] = C[i] % 10;
	}
	
	int max = lena;
	if(max < lenb) {
		max = lenb;
	}
	max = max - 1;
	if(C[max + 1] != 0) {//是否进位 
		max = max + 1;
	}
	for(int i = max; i >= 0; i--) {
		cout << C[i];
	}
	return 0;
}

