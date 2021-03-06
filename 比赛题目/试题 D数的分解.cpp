/*【问题描述】
　　把 2019 分解成 3 个各不相同的正整数之和，并且要求每个正整数都不包 含数字 2 和 4，一共有多少种不同的分解方法？
　　注意交换 3 个整数的顺序被视为同一种方法，例如 1000+1001+18 和 1001+1000+18 被视为同一种。
　
【答案提交】
　　这是一道结果填空的题，你只需要算出结果后提交即可。本题的结果为一 个整数，在提交答案时只填写这个整数，
填写多余的内容将无法得分。
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i < 2000; i++){
		if (i%10==2 || i%10==4
		 || (i%100>=20 && i%100<=29) || (i%100>=40 && i%100<=49) 
		 || (i%1000>=200 && i%1000<=299) || (i%1000>=400 && i%1000<=499)){
		 	continue;
		 }
		for (int j = i+1; j < 2000; j++){
			if (j%10==2 || j%10==4
			 || (j%100>=20 && j%100<=29) || (j%100>=40 && j%100<=49) 
			 || (j%1000>=200 && j%1000<=299) || (j%1000>=400 && j%1000<=499)){
		 		continue;
			 }
			for (int k = j+1; k < 2000; k++){
				if (k%10==2 || k%10==4
				 || (k%100>=20 && k%100<=29) || (k%100>=40 && k%100<=49) 
				 || (k%1000>=200 && k%1000<=299) || (k%1000>=400 && k%1000<=499)){
		 			continue;
				 }
				 if (i + j + k == 2019){
				 	sum++;
				 }
			}
		}
	}
	cout << sum << endl;
    return 0;
}



//--------------别人的解法-----------------------------------------
//#include <iostream>
//using namespace std;
//
//int ans = 0;
//
//bool check(int num)
//{
//	while (num > 0)
//	{
//		if (num % 10 == 2 || num % 10 == 4) return false;
//		num /= 10;
//	}
//	return true;
//}
//
//int main()
//{
//	freopen("text.ini", "w", stdout);	//将输出结果存入text.ini，会自己创建，运行结束后打开文本即可
//
//	for (int i = 1; i <= 2019 / 3; i++)
//	{
//		if (!check(i)) continue;
//		for (int j = i + 1; j <= (2019 - i) / 2; j++)
//		{
//			if (j >= 2019 - i - j || !check(j) || !check(2019 - i - j)) continue;
//			//这里我当时测试了一下输出结果，怕出意外。大家可以改成ans++，在结束前输出ans即可。
//			cout << ++ans << ": " << i << " + " << j << " + " << 2019 - i - j << endl;
//		}
//	}
//
//	cout << "over" << endl;
//	while (1);
//	return 0;
//}

