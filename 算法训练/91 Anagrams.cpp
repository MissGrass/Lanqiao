/*
��������
����Anagramsָ���Ǿ����������Ե��������ʣ������������ʵ��У�ÿһ��Ӣ����ĸ�������ִ�Сд��
	�����ֵĴ���������ͬ�ġ����磬��Unclear���͡�Nuclear������Rimon���͡�MinOR������Anagrams��
	��дһ�����������������ʣ�Ȼ���ж�һ�£������������Ƿ���Anagrams��
	ÿһ�����ʵĳ��Ȳ��ᳬ��80���ַ��������Ǵ�Сд�޹صġ�
�������ʽ�����������У��ֱ�Ϊ�������ʡ�
�������ʽ�����ֻ��һ����ĸY��N���ֱ��ʾYes��No��
���������������
��������
Unclear
Nuclear
�������
Y
*/
#include <iostream>
#include <cctype>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;

	if (s1.length() == s2.length()){
		for (int i = 0; i < s1.length(); i++){
			for (int j = 0; j < s2.length(); j++){
					if (tolower(s1[i]) == tolower(s2[j])){
						s2[j] = ' ';
						break;
					}else if(j == s2.length() - 1){
						cout << "N" << endl;
						return 0;
					}
			}
		}
		cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}
    return 0;
}

