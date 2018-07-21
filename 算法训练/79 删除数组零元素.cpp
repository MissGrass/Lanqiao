#include <iostream>
#include <cstring>
#include <algorithm>
const int N = 100; 
int CompactIntegers(int a[],int x); 
using namespace std;
		int n, m = 0;
	int a[N];
int main() {
	int *a = new int[10];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	m = CompactIntegers(a,n);
	cout << m << endl;
	for(int i = 0; i < n; i++){
		if(a[i] != 0){
			cout << a[i] << " ";
		}
	}
	delete [] a;
	
    return 0;
}

int CompactIntegers(int a[],int x){
	
	for(int i = 0; i < n; i++){
		if(a[i] != 0){
			m++;
		}
	}
	return m;
}
