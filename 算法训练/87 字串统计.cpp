/*
��������
��������һ������Ϊn���ַ���S������һ������L��ͳ�Ƴ��ȴ��ڵ���L�ĳ��ִ��������Ӵ�����ͬ�ĳ��ֿ����ཻ����
����ж���������ģ������Ȼ�ж���������һ�γ�������ġ�
�����ʽ
������һ��һ������L��
�����ڶ������ַ���S��
����L����0���Ҳ�����S�ĳ��ȡ�
�����ʽ
����һ�У���ĿҪ����ַ�����
������������1��
4
bbaabbaaaaa
�����������1��
����bbaa
������������2��
2
bbaabbaaaaa
�����������2��
����aa
���ݹ�ģ��Լ��
����n<=60
����S�������ַ�����СдӢ����ĸ��
��ʾ
����ö�����п��ܵ��Ӵ���ͳ�Ƴ��ִ������ҳ������������Ǹ�*/
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;
	string a;
	cin >> a;
	vector<string> v;
	int len = a.length();
	for (int i = num; i <= len; i++){
		for (int j = 0; j <= len - i; j++){
			v.push_back(a.substr(j,i));//�����ַ�����j��ʼi�� ���뵽vβ�� 
		}
	}
//	cout << v.size() << endl; 
	int max = 0;
	int k = 0;
	vector<int> book(v.size());

	for (int i = 0; i <= v.size() - 1; i++) {
        for (int j = 0; j <= v.size() - 1; j++) {
            if (i != j && v[i] == v[j]){
            	
            	book[i]++;
			}
                
        }
    }
	
	
	for (int i = 0; i <= v.size() - 1; i++){
		//�������ͬ�������ģ����������һ�� 
		if (book[i] > max || (book[i] == max && v[k].length() < v[i].length())){
			k = i;
			max = book[i];
		}
	}
	cout << v[k];
    return 0;
}












