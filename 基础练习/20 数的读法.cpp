/*Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�һ��Ⱦɫ�����г�
ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
����˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
���ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
ʮ������ǧ�İ���ʮ������ǧ���
�ú���ƴ����ʾΪ
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
������ֻ��Ҫ������Ϳ����ˡ�
��������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д�Ĺ淶תΪ��
��ƴ���ִ������ڵ�����������һ���ո���񿪡�
ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi�������ǡ�yi wan ling shi����
��100000��������shi wan�������ǡ�yi shi wan������2000��������er qian�������ǡ�liang qian����*/
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
        ans += b[t[0]-'0'];//���Ķ��� 
        ans += "qian ";//ǧ 
    }
    if(lent >= 3) {
        if(t[lent-3] != '0') {//��λ��Ϊ�� 
            ans += b[t[lent-3]-'0'];//���Ķ��� 
            ans += "bai ";//�� 
        }
        if(lent == 4 && t[lent-3] == '0' && t[lent] != '0') {//��ǧλ����λΪ�㣬��λ��Ϊ�� 
        	ans += "ling ";
			text = 1;        	
		}

    }
    if(lent >= 2) {
        if(t[lent-2] == '1') {//ʮλΪ1 
            if(lent != 2) {//���Ȳ�Ϊ2 
                ans += "yi shi ";//����yi shi 
            } else {//����Ϊ2 
                ans += "shi ";//����shi 
            }
        }
        if(t[lent-2] != '0' && t[lent-2] != '1') {//ʮλ��Ϊ0��ʮλ��Ϊ1 
            ans += b[t[lent-2]-'0'];//���Ķ��� 
            ans += "shi ";//�ӵ�λshi 
        }
//        if(text == 1 && t[lent-2] == '0')//��ǧλ����λΪ�㣬ʮλΪ�㣬��λ��Ϊ�� 	
//			continue;
		if(text == 0 && t[lent-2] == '0' && t[lent-1] != '0' && (lent == 4 || lent == 3))//��λ��Ϊ��  ʮλΪ�㣬��λ��Ϊ�� 
        	ans += "ling "; 
        
    }
    if(lent >= 1) {
        if(t[lent-1] != '0') {//��λ��Ϊ0 
            ans += b[t[lent-1]-'0'];//���Ķ��� 
        }
    }
    return ans;//����ʮ�ڵ��ڡ�ǧ����ǧ����λ�Ķ���ѭ�� 
}
int main() {
	string s;
    cin >> s;
    int len = s.length();
    string sub;
    if(len == 10) {//ʮ��λ 
        sub = s.substr(0, 2);//substr���ܣ���һ���ַ�������һ����ָ��λ�ÿ�ʼ��������ָ�����ȵ����ַ����� 
        cout << func(sub) << "yi ";//���ú��� 
    }
    if(len == 9) {//��λ 
        sub = s.substr(0, 1);//substr���ܣ���һ���ַ�������һ����ָ��λ�ÿ�ʼ��������ָ�����ȵ����ַ����� 
        cout << func(sub) << "yi ";//���� 
    }
    sub = "";
    int flag = 0;//���flagΪ0,δʹ�� 
    if(len >= 5) {//���ֳ��ȴ��ڵ�����λ 
        for(int i = len-8; i < len - 4; i++) {
            if(i < 0) continue;//���С����λ �������λΪǧ��λ��8λ����������� i+1
            if(flag == 0 && s[i] == '0') {//û��������һ����Ϊ0����
                continue;
            }
            sub += s[i];//ǧ��λ����λ֮���һ����������� ����λ���� 
            flag = 1;//���flagΪ1����ʹ�õ�һ��������������ҵ� 
        }
        if(flag == 1) {//flagΪ1����������ǧ��λ����λ֮�� 
            cout << func(sub) << "wan ";//��������ǧ��λ����λ֮�䣩���ӵ�λwan 
        }
        flag = 0;//���ñ�� 
        sub = "";
        for(int i = len-4; i < len; i++) {
            if(flag == 0 && s[i] == '0') {//û������ǧλ����λ֮���һ����������� 
                continue;
            }
            if((flag == 0)&&((i == len-1 && s[i-1] == '0') ||(i == len-2 && s[i-1] == '0') || (i == len-3 && s[i-1] == '0')))//��һ������������������ǰ��һλ��0 
                cout << "ling ";
            sub += s[i];//��ǵ�һ������������Լ���֮����� 
            flag = 1;//����Ѿ����ֵ�һ����������� 
        }
    }
    if(len <= 4) {//���ֳ���С�ڵ���ǧλ 
        sub = s;
        flag = 1;
    }
    if(flag == 1) {
        cout << func(sub);//���ú������� 
    }
    return 0;
}

