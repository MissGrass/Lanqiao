/*
��������
������дһ����������һ���ַ��������Ȳ�����20����Ȼ�������ַ����ڵ�ÿһ���ַ����д�Сд�任��������д��ĸ���Сд��Сд��ĸ��ɴ�д��Ȼ�������µ��ַ��������
���������ʽ������һ���ַ�������������ַ�������ֻ����Ӣ����ĸ���������������͵��ַ���Ҳû�пո�
���������ʽ���������ת������ַ�����
�����������
��������
AeDb
�������
aEdB*/ 
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char *str = new char[20];
	cin >> str;
	for (int i = 0; i < strlen(str); i++){
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = tolower(str[i]);
		else
			str[i] = toupper(str[i]);
	}
	
	cout << str;
	delete []str;
    return 0;
}

