#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
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
	
	if( AX2 <= BX1 || AY2 <= BY1) {
		cout << "0.00";
        return 0;
	}
	double a[4] = {AX1, AX2, BX1, BX2};
    double b[4] = {AY1, AY2, BY1, BY2};
    sort(a, a+4);
    sort(b, b+4);
    float area = (a[2] - a[1]) * (b[2] - b[1]);
    printf("%.2f",area);
	return 0;
}

