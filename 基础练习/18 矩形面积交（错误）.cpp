/*问题描述
平面上有两个矩形，它们的边平行于直角坐标系的X轴或Y轴。对于每个矩形，我们给出它的一对相对顶点的坐标，
请你编程算出两个矩形的交的面积。
输入格式
输入仅包含两行，每行描述一个矩形。
在每行中，给出矩形的一对相对顶点的坐标，每个点的坐标都用两个绝对值不超过10^7的实数表示。
输出格式
输出仅包含一个实数，为交的面积，保留到小数后两位。
样例输入
1 1 3 3
2 2 4 4
样例输出
1.00
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
swap(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
}
int main() {
	float AX1, AY1, AX2, AY2, BX1, BY1, BX2, BY2;
	float S;
	
	cin >> AX1 >> AY1 >> AX2 >> AY2;
	cin >> BX1 >> BY1 >> BX2 >> BY2; 
	if( AX2 < AX1 ) {
		swap(AX2,AX1); 
	}
	if( AY2 < AY1 ) {
		swap(AY2,AY1); 
	}
	if( BX2 < BX1 )	{
		swap(BX1,BX2);
	}
	if( BY2 < BY1 ) {
		swap(BY1,BY2); 
	}
	cout << AX1 << AY1 << AX2 << AY2 << endl;
	cout << BX1 << BY1 << BX2 << BY2 << endl;
	
	if( BX1 > AX1 && BX1 < AX2 ) {
		if( BY1 > AY1 && BY1 < BY2 ) {
			if( AX1 > BX1 && AX1 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "1";
					S = abs(BX1 - AX1) * abs(BY1 - AY1);//BX1,BY1,AX1,AY1
					printf("%.2f",S);//BX1,BY1,AX1,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "2";
					S = abs(BX1 - AX1) * abs(BY1 - AY2);//BX1,BY1,AX1,AY2
					printf("%.2f",S);//BX1,BY1,AX1,AY2
				}
			}
			if( AX2 > BX1 && AX2 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "3";
					S = abs(BX1 - AX2) * abs(BY1 - AY1);//BX1,BY1,AX2,AY1
					printf("%.2f",S);//BX1,BY1,AX2,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "4";
					S = abs(BX1 - AX2) * abs(BY1 - AY2);//BX1,BY1,AX2,AY2
					printf("%.2f",S);//BX1,BY1,AX2,AY2
				}
			}
		}
		if( BY2 > AY1 && BY2 < BY2 ) {
			if( AX1 > BX1 && AX1 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "5";
					S = abs(BX1 - AX1) * abs(BY2 - AY1);//BX1,BY2,AX1,AY1
					printf("%.2f",S);//BX1,BY2,AX1,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "6";
					S = abs(BX1 - AX1) * abs(BY2 - AY2);//BX1,BY2,AX1,AY2
					printf("%.2f",S);//BX1,BY2,AX1,AY2
				}
			}
			if( AX2 > BX1 && AX2 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "7";
					S = abs(BX1 - AX2) * abs(BY2 - AY1);//BX1,BY2,AX2,AY1
					printf("%.2f",S);//BX1,BY2,AX2,AY1
					
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "8";
					S = abs(BX1 - AX2) * abs(BY2 - AY2);//BX1,BY2,AX2,AY2
					printf("%.2f",S);//BX1,BY2,AX2,AY2
				}
			}
		}
	}
	if( BX2 > AX1 && BX2 < AX2 ) {
		if( BY1 > AY1 && BY1 < BY2 ) {
			if( AX1 > BX1 && AX1 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "9";
					S = abs(BX2 - AX1) * abs(BY1 - AY1);//BX2,BY1,AX1,AY1
					printf("%.2f",S);//BX2,BY1,AX1,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "10";
					S = abs(BX2 - AX1) * abs(BY1 - AY2);//BX2,BY1,AX1,AY2
					printf("%.2f",S);//BX2,BY1,AX1,AY2
				}
			}
			if( AX2 > BX1 && AX2 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "11";
					S = abs(BX2 - AX2) * abs(BY1 - AY1);//BX2,BY1,AX2,AY1
					printf("%.2f",S);//BX2,BY1,AX2,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "12";
					S = abs(BX2 - AX2) * abs(BY1 - AY2);//BX2,BY1,AX2,AY2
					printf("%.2f",S);//BX2,BY1,AX2,AY2
				}
			}
		}
		if( BY2 > AY1 && BY2 < BY2 ) {
			if( AX1 > BX1 && AX1 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "13";
					S = abs(BX2 - AX1) * abs(BY2 - AY1);//BX2,BY2,AX1,AY1
					printf("%.2f",S);//BX2,BY2,AX1,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "14";
					S = abs(BX2 - AX1) * abs(BY2 - AY1);//BX2,BY2,AX1,AY2
					printf("%.2f",S);//BX2,BY2,AX1,AY2
				}
			}
			if( AX2 > BX1 && AX2 < BX2 ) {
				if( AY1 > BY1 && AY1 < BY2 ) {
					cout << "15";
					S = abs(BX2 - AX2) * abs(BY2 - AY1);//BX2,BY2,AX2,AY1
					printf("%.2f",S);//BX2,BY2,AX2,AY1
				}
				if( AY2 > BY1 && AY2 < BY2) {
					cout << "16";
					S = abs(BX2 - AX2) * abs(BY2 - AY2);//BX2,BY2,AX2,AY2
					printf("%.2f",S);//BX2,BY2,AX2,AY2
				}
			}
		}
	}
	return 0;
}

