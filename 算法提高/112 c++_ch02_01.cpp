/*
��дһ����������ǿ������ת����ӡԪ����ĸ��Сд10����ʽ��ASCII�롣
���������˳��Ϊ����д����ĸA��E��I��O��U��ASCII�룬Сд����ĸa��e��i��o��u��ASCII�롣
���е�ASCII�붼��ʮ���Ʊ�ʾ.���10��,ÿ��һ��ASCII�룬������һ�����С�
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	char c[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
	for(int i = 0; i < 10; i++){
		cout << static_cast<int> (c[i]) << endl;
	}
    return 0;
}

