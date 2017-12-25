/*��������
�������[a,b]�������������������ֽ⡣
�����ʽ
������������a��b��
�����ʽ
ÿ�����һ�����ķֽ⣬����k=a1*a2*a3��(a1<=a2<=a3����kҲ�Ǵ�С�����)(����ɿ�����)
��������
3 10
�������
3=3
4=2*2
5=5
6=2*3
7=7
8=2*2*2
9=3*3
10=2*5
��ʾ
��ɸ������������Ȼ���ٷֽ⡣
���ݹ�ģ��Լ��
2<=a<=b<=10000
*/ 
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int isprime(int n) {
    if(n <= 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else {
        for(int i = 2; i * i < n; i++) {
            if(n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int temp = i;
        cout << i << "=";
        int flag = 0;
        while(temp != 1) {
            for(int j = 2; j <= temp; j++) {
                if(isprime(j) && temp % j == 0) {
                    temp = temp / j;
                    if(flag == 1)
                        cout << "*";
                    cout << j;
                    flag = 1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

