/*
��Ƹ����⣬ʵ�ֻ����ĸ����Ӽ��˳����㡣
��������ʱֻ��ֱ����ʵ�����鲿���Կո�ָ��������֮����������ָ������ʱ��a+bi�ĸ�ʽ����Ļ�ϴ�ӡ�����
�μ�������������������
����ע�⿼������������޷�����ʱ����ַ���"error"��
��������
2 4 * -3 2
�������
-14-8i
��������
3 -2 + -1 3
�������
2+1i
*/







// �ҷǳ�������Ϊʲô����666666666�֣��������������������� 
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

