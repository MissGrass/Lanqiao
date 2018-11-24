/*
设计复数库，实现基本的复数加减乘除运算。
　　输入时只需分别键入实部和虚部，以空格分割，两个复数之间用运算符分隔；输出时按a+bi的格式在屏幕上打印结果。
参加样例输入和样例输出。
　　注意考虑特殊情况，无法计算时输出字符串"error"。
样例输入
2 4 * -3 2
样例输出
-14-8i
样例输入
3 -2 + -1 3
样例输出
2+1i
*/







// 我非常不明白为什么总是666666666分！！！！！！！！！生气 
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, d, e;
	int m, n;
	char c;
	cin >> a >> b >> c >> d >> e;
	if(c == '*'){
		m = a * d - b * e;
		n = b * d + a * e;			
	}else if(c == '+'){
		m = a + d;
		n = b + e;
	}else if(c == '-'){
		m = a - d;
		n = b - e;
	}else if(c == '/'){
		if(d == 0 && e == 0){
			cout << "error" << endl;
			return 0;
		}else{
			double l, r;
			l = (double)(a*c + d*e)/(c*c+d*d);
			r = (double)(b*c - a*d)/(c*c+d*d);
				
				
				
			if(l == 0){
				if(r == 0){
					cout << 0 << endl; 
				}else{
					cout << setprecision(1) << r << "i" << endl;
				}
			}else{
				if(r < 0){
					cout << setprecision(1) << l << r <<"i"<< endl;
				}else if(r > 0){
					cout << setprecision(1) << l << "+"<< r <<"i"<< endl;
				}else{
					cout << setprecision(1) << l << endl;
				}
			}
		}
		return 0;
	}else{
		cout << "error" << endl;
		return 0;
	}
	
	if(m == 0){
		if(n == 0){
			cout << 0 << endl; 
		}else{
			cout << n << "i" << endl;
		}
	}else{
		if(n < 0){
			cout << m << n <<"i"<< endl;
		}else if(n > 0){
			cout << m << "+"<< n <<"i"<< endl;
		}else{
			cout << m << endl;
		}
	}
	
    return 0;
}

