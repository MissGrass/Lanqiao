/*��������
Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�
һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
����˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
���ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
ʮ������ǧ�İ���ʮ������ǧ���
�ú���ƴ����ʾΪ
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
������ֻ��Ҫ������Ϳ����ˡ�
��������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д
�Ĺ淶תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi��
�����ǡ�yi wan ling shi������100000��������shi wan�������ǡ�yi shi wan����
��2000��������er qian�������ǡ�liang qian����
�����ʽ
��һ�����ִ�����ֵ��С������2,000,000,000��
�����ʽ
��һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������
1234567009
�������
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	string s[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//	int d[5] = {'shi','bai','qian','wan','yi'};
	string a;//�洢���� 
	int k;//�洢λ��
	int i, j;
	char t;
	cin >> a;
	k = a.length();
	j = k;
	int flag = 0;
	int flag1 = 0;
	int flag2 = 0;
	for(i = 0; i < j; i++) {
		if(k % 4 == 0) {
			cout << s[a[i] - '0'] << " qian ";
		}
		if(k % 4 == 3) {
			if(a[i] == '0' && a[i + 1] == '0' && a[i + 2] == '0'){
				flag2 = 1;//����λʮ��λ����λ������
				cout << ""; 
			}
			else if(a[i] == '0' && a[i + 1] == '0' && a[i + 2] != '0') {
				cout << " ling ";
			}
			else
				cout << s[a[i] - '0'] << " bai ";
		}
		if(k % 4 == 2) {
			if(flag == 0)
				cout << "shi ";
			else {
				if(a[i] == '0' && a[i + 1] == '0') {
					if(k / 4 == 1){
						flag1 = 1;// /ʮ��λ����λ������ 
						cout << "";
					}
					
					else if(k / 4 == 2){
						cout << " yi ";
					}
					
				}
				else if(a[i] == 0 && a[i + 1] != 0) {
					cout << " ling ";
				}
				
				else {
					cout << s[a[i] - '0'] << " shi ";
				}
				
			}
				
		}
		if(k % 4 == 1) {
			if(k / 4 == 2) {
				if(a[i] == '0') 
					
					cout << " yi ";
				else
					cout << s[a[i] - '0'] << " yi ";
			}
			if(k / 4 == 1) {
				if(a[i] == '0') 
					if(flag1 == 1 || flag2 == 1)//ʮ��λ����λ������ 
						cout << " wan ";
					else
						cout << s[a[i] - '0'] << " wan ";
			}
			if(k / 4 == 0) {
				cout << s[a[i] - '0'] << endl;
			}
		}
		flag = 1;
		k--;
		if(k == 0) break;
	} 
	return 0;
}

