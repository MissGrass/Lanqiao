#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int i = 1, j = 2;
	int sum = 0;
	for (int j = 2; j < 102; j ++){
		sum += i;
		i += j;
	}
	cout << sum;
    return 0;
}

