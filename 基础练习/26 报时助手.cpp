/*��������
����������ǰ��ʱ�䣬����Ӣ�ĵĶ���������������
����ʱ����ʱh�ͷ�m��ʾ����Ӣ�ĵĶ����У���һ��ʱ��ķ����ǣ�
�������mΪ0����ʱ��������Ȼ����ϡ�o��clock������3:00������three o��clock����
�������m��Ϊ0����ʱ��������Ȼ�󽫷ֶ���������5:30������five thirty����
����ʱ�ͷֵĶ���ʹ�õ���Ӣ�����ֵĶ���������0~20������
����0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven, 12:twelve,
	13:thirteen, 14:fourteen, 15:fifteen, 16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty��
����30����thirty��40����forty��50����fifty��
�������ڴ���20С��60�����֣����ȶ���ʮ������Ȼ���ټ��ϸ�λ������31���ȶ�30�ټ�1�Ķ�����������thirty one����
����������Ĺ���21:54������twenty one fifty four����9:07������nine seven����0:15������zero fifteen����
�����ʽ
����������������Ǹ�����h��m����ʾʱ���ʱ�ͷ֡����������ǰû��ǰ��0��hС��24��mС��60��
�����ʽ
�������ʱ��ʱ�̵�Ӣ�ġ�
��������
0 15
�������
zero fifteen
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int h, m;
	cin >> h >> m;
	string a[24]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve",
	"thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty"};
	
	if(h >=0 && h <= 20) {
		cout << a[h] << " ";
	}else {
		cout << a[20] << " " << a[h % 20] << " ";
	}
	//���� 
	if(m == 0) {
		cout << "o' clock";
	}else if(m <= 20 && m > 0) {
		cout << a[m];
	}else if(m > 20 && m < 30) {
		cout << a[20] << " " << a[m % 20];
	}else if(m == 30) {
		cout << a[21];
	}else if(m > 30 && m < 40) {
		cout << a[21] << " " << a[m % 30];
	}else if(m == 40) {
		cout << a[22];
	}else if(m > 40 && m < 50) {
		cout << a[22] << " " << a[m % 40];
	}else if(m == 50) {
		cout << a[23];
	}else if(m > 50 && m < 60) {
		cout << a[23] << " " << a[m % 50];
	}
	return 0;
}

