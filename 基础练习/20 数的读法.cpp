/*Tom教授正在给研究生讲授一门关于基因的课程，有一件事情让他颇为头疼：一条染色体上有成
千上万个碱基对，它们从0开始编号，到几百万，几千万，甚至上亿。
比如说，在对学生讲解第1234567009号位置上的碱基时，光看着数字是很难准确的念出来的。
所以，他迫切地需要一个系统，然后当他输入12 3456 7009时，会给出相应的念法：
十二亿三千四百五十六万七千零九
用汉语拼音表示为
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
这样他只需要照着念就可以了。
你的任务是帮他设计这样一个系统：给定一个阿拉伯数字串，你帮他按照中文读写的规范转为汉
语拼音字串，相邻的两个音节用一个空格符格开。
注意必须严格按照规范，比如说“10010”读作“yi wan ling yi shi”而不是“yi wan ling shi”，
“100000”读作“shi wan”而不是“yi shi wan”，“2000”读作“er qian”而不是“liang qian”。*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
string b[10] = {"ling ", "yi ", "er ", "san ", "si ", "wu ", "liu ","qi ", "ba ", "jiu "};
string func(string t) {
    string ans;
    int text = 0;
    int lent = t.length();
    if(lent >= 4) {
        ans += b[t[0]-'0'];//数的读法 
        ans += "qian ";//千 
    }
    if(lent >= 3) {
        if(t[lent-3] != '0') {//百位不为零 
            ans += b[t[lent-3]-'0'];//数的读法 
            ans += "bai ";//百 
        }
        if(lent == 4 && t[lent-3] == '0' && t[lent] != '0') {//有千位，百位为零，个位不为零 
        	ans += "ling ";
			text = 1;        	
		}

    }
    if(lent >= 2) {
        if(t[lent-2] == '1') {//十位为1 
            if(lent != 2) {//长度不为2 
                ans += "yi shi ";//读作yi shi 
            } else {//长度为2 
                ans += "shi ";//读作shi 
            }
        }
        if(t[lent-2] != '0' && t[lent-2] != '1') {//十位不为0且十位不为1 
            ans += b[t[lent-2]-'0'];//数的读法 
            ans += "shi ";//加单位shi 
        }
//        if(text == 1 && t[lent-2] == '0')//有千位，百位为零，十位为零，个位不为零 	
//			continue;
		if(text == 0 && t[lent-2] == '0' && t[lent-1] != '0' && (lent == 4 || lent == 3))//百位不为零  十位为零，个位不为零 
        	ans += "ling "; 
        
    }
    if(lent >= 1) {
        if(t[lent-1] != '0') {//个位不为0 
            ans += b[t[lent-1]-'0'];//数的读法 
        }
    }
    return ans;//整个十亿到亿、千万到万、千到个位的读法循环 
}
int main() {
	string s;
    cin >> s;
    int len = s.length();
    string sub;
    if(len == 10) {//十亿位 
        sub = s.substr(0, 2);//substr功能：从一个字符串复制一个从指定位置开始，并具有指定长度的子字符串。 
        cout << func(sub) << "yi ";//调用函数 
    }
    if(len == 9) {//亿位 
        sub = s.substr(0, 1);//substr功能：从一个字符串复制一个从指定位置开始，并具有指定长度的子字符串。 
        cout << func(sub) << "yi ";//调用 
    }
    sub = "";
    int flag = 0;//标记flag为0,未使用 
    if(len >= 5) {//数字长度大于等于万位 
        for(int i = len-8; i < len - 4; i++) {
            if(i < 0) continue;//如果小于亿位 ，（最大位为千万位，8位数），则继续 i+1
            if(flag == 0 && s[i] == '0') {//没有遇到第一个不为0的数
                continue;
            }
            sub += s[i];//千万位到万位之间第一个不是零的数 到万位的数 
            flag = 1;//标记flag为1，已使用第一个不是零的数已找到 
        }
        if(flag == 1) {//flag为1，存在数在千万位到万位之间 
            cout << func(sub) << "wan ";//读出数（千万位到万位之间），加单位wan 
        }
        flag = 0;//重置标记 
        sub = "";
        for(int i = len-4; i < len; i++) {
            if(flag == 0 && s[i] == '0') {//没有遇到千位到个位之间第一个不是零的数 
                continue;
            }
            if((flag == 0)&&((i == len-1 && s[i-1] == '0') ||(i == len-2 && s[i-1] == '0') || (i == len-3 && s[i-1] == '0')))//第一个不是零的数且这个数前面一位是0 
                cout << "ling ";
            sub += s[i];//标记第一个不是零的数以及它之后的数 
            flag = 1;//标记已经出现第一个不是零的数 
        }
    }
    if(len <= 4) {//数字长度小于等于千位 
        sub = s;
        flag = 1;
    }
    if(flag == 1) {
        cout << func(sub);//调用函数读出 
    }
    return 0;
}

