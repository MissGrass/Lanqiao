#include <iostream>
#include <cstring>
#include <algorithm>
const int N = 100;
using namespace std;
int main() {
	int cot;
	cin >> cot;
	while(cot--){
		int sum = 0;
		int n;
		cin >> n;
		int a[N] = {0}, b[N] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		
		for(int i = 0; i < n; i++){
			sum += a[i] * b[n-i-1];
		}
		cout << sum << endl;
	}
	
    return 0;
}

