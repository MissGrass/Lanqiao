/*
问题描述
　　输入一个只包含加减乖除和括号的合法表达式，求表达式的值。其中除表示整除。
输入格式
　　输入一行，包含一个表达式。
输出格式
　　输出这个表达式的值。
样例输入
1-2+3*(4-5)
样例输出
-4
数据规模和约定
　　表达式长度不超过100，表达式运算合法且运算过程都在int内进行。*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stack>
using namespace std;
stack<char> stack_ch;//符号栈
stack<int> stack_num;//数值栈 
char str[1000];//输入的中缀表达式
char number[100];//用来将字符串中的数字变成int型的数组

void js1(){//这个函数只接收+-号，+-号等级最低，运算符栈中除了括号外都可以取出运算 
	int num1, num2;
	while (stack_ch.top()!='('){//从运算符栈中取一个运算符对数值栈顶和次项元素进行运算 
		num1 = stack_num.top();//取出一个数
		stack_num.pop();//弹出这个数
		num2 = stack_num.top();
		stack_num.pop(); 
		switch (stack_ch.top()){
			case '+':
				num2 += num1;
				break;
			case '-':
				num2 -= num1;
				break;
			case '*':
				num2 *= num1;
				break;
			case '/':
				num2 /= num1;
				break; 
		}
		stack_num.push(num2);//将计算结果入数值栈
		stack_ch.pop();//删除已经用过的符号 
	} 
} 

void js2(){//只接收*/运算符 
	int num1, num2;
	while (stack_ch.top()=='*' || stack_ch.top()=='/'){//栈中只有*/优先级大于*/
		num1 = stack_num.top();
		stack_num.pop();
		num2 = stack_num.top();
		stack_num.pop();
		switch (stack_ch.top()){
			case '*':
				num1 *= num1;
				break;
			case '/':
				num2 /= num1;
				break;
		}
		stack_ch.pop();
		stack_num.push(num2);
	}
} 

int main() {
	int i, k = 0, s;
	char c[5] = ".";
	stack_ch.push('(');//进栈 
	gets(str);//获得表达式 
	strcat(str,c);//连接字符串的函数 
	for (i = 0; str[i]; i++){
		if(str[i] >= '0' && str[i] <= '9'){//若为数值 
			number[k++] = str[i];
			continue;
		}
		number[k] = '\0';//变成字符串\0结尾
		if (number[0]!='\0'){
			s = atoi(number);//atoi函数把字符串变成整型数 
			number[0] = '\0';
			stack_num.push(s);//将字符串转换成整型，放入数值栈中 
		} 
		k = 0;
		switch(str[i]){//+-(这3个符号入js1函数，*/入js2函数，优先级不同要分开计算 
			case '+':
				js1();
				stack_ch.push('+');
				break;
			case '-':
				js1();
				stack_ch.push('-');
				break;
			case '*':
				js2();
				stack_ch.push('*');
				break; 
			case '/':
				js2();
				stack_ch.push('/');
				break;
			case '(':
				stack_ch.push('(');
				break;
			case ')':
				js1();
				stack_ch.pop();//弹出元素 
				break;
			case '.':
				{
					js1();
					stack_ch.pop();
				}
		}
	} 
	printf("%d\n",stack_num.top());
//	cout << stack_num.top();
}








