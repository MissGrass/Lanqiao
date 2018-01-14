/*问题描述
Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：
一条染色体上有成千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
比如说，在对学生讲解第1234567009号位置上的碱基时，光看着数字是很难准确的念出来的。
所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
十二亿三千四百五十六万七千零九
用汉语拼音表示为
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
这样他只需要照着念就可以了。
你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写
的规范转为汉语拼音字串，相邻的两个音节用一个空格符格开。
注意必须严格按照规范，比如说“10010”读作“yi wan ling yi shi”
而不是“yi wan ling shi”，“100000”读作“shi wan”而不是“yi shi wan”，
“2000”读作“er qian”而不是“liang qian”。
输入格式
有一个数字串，数值大小不超过2,000,000,000。
输出格式
是一个由小写英文字母，逗号和空格组成的字符串，表示该数的英文读法。
样例输入
1234567009
样例输出
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	string s[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//	int d[5] = {'shi','bai','qian','wan','yi'};
	string a;//存储数字 
	int k;//存储位数
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
				flag2 = 1;//百万位十万位和万位都是零
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
						flag1 = 1;// /十万位和万位都是零 
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
					if(flag1 == 1 || flag2 == 1)//十万位和万位都是零 
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

