/*问题描述
　　给定当前的时间，请用英文的读法将它读出来。
　　时间用时h和分m表示，在英文的读法中，读一个时间的方法是：
　　如果m为0，则将时读出来，然后加上“o’clock”，如3:00读作“three o’clock”。
　　如果m不为0，则将时读出来，然后将分读出来，如5:30读作“five thirty”。
　　时和分的读法使用的是英文数字的读法，其中0~20读作：
　　0:zero, 1: one, 2:two, 3:three, 4:four, 5:five, 6:six, 7:seven, 8:eight, 9:nine, 10:ten, 11:eleven, 12:twelve,
	13:thirteen, 14:fourteen, 15:fifteen, 16:sixteen, 17:seventeen, 18:eighteen, 19:nineteen, 20:twenty。
　　30读作thirty，40读作forty，50读作fifty。
　　对于大于20小于60的数字，首先读整十的数，然后再加上个位数。如31首先读30再加1的读法，读作“thirty one”。
　　按上面的规则21:54读作“twenty one fifty four”，9:07读作“nine seven”，0:15读作“zero fifteen”。
输入格式
　　输入包含两个非负整数h和m，表示时间的时和分。非零的数字前没有前导0。h小于24，m小于60。
输出格式
　　输出时间时刻的英文。
样例输入
0 15
样例输出
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
	//分钟 
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

