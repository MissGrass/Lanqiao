#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int i = 1, j, sum = 0;
	while(i){
		for (int j = i; ; j++){
			sum += j;
			if(sum > 236){
				sum = 0;
				break;
			}else if(sum == 236){
				cout << i;
				return 0;
			}
		} 
		i++;
	}
    return 0;
}

