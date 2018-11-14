/*
问题描述
　　Anagrams指的是具有如下特性的两个单词：在这两个单词当中，每一个英文字母（不区分大小写）
	所出现的次数都是相同的。例如，“Unclear”和“Nuclear”、“Rimon”和“MinOR”都是Anagrams。
	编写一个程序，输入两个单词，然后判断一下，这两个单词是否是Anagrams。
	每一个单词的长度不会超过80个字符，而且是大小写无关的。
　输入格式：输入有两行，分别为两个单词。
　输出格式：输出只有一个字母Y或N，分别表示Yes和No。
　　输入输出样例
样例输入
Unclear
Nuclear
样例输出
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

