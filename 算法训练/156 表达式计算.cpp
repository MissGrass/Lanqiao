/*
��������
��������һ��ֻ�����Ӽ��Գ������ŵĺϷ����ʽ������ʽ��ֵ�����г���ʾ������
�����ʽ
��������һ�У�����һ�����ʽ��
�����ʽ
�������������ʽ��ֵ��
��������
1-2+3*(4-5)
�������
-4
���ݹ�ģ��Լ��
�������ʽ���Ȳ�����100�����ʽ����Ϸ���������̶���int�ڽ��С�*/
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stack>
using namespace std;
stack<char> stack_ch;//����ջ
stack<int> stack_num;//��ֵջ 
char str[1000];//�������׺���ʽ
char number[100];//�������ַ����е����ֱ��int�͵�����

void js1(){//�������ֻ����+-�ţ�+-�ŵȼ���ͣ������ջ�г��������ⶼ����ȡ������ 
	int num1, num2;
	while (stack_ch.top()!='('){//�������ջ��ȡһ�����������ֵջ���ʹ���Ԫ�ؽ������� 
		num1 = stack_num.top();//ȡ��һ����
		stack_num.pop();//���������
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
		stack_num.push(num2);//������������ֵջ
		stack_ch.pop();//ɾ���Ѿ��ù��ķ��� 
	} 
} 

void js2(){//ֻ����*/����� 
	int num1, num2;
	while (stack_ch.top()=='*' || stack_ch.top()=='/'){//ջ��ֻ��*/���ȼ�����*/
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
	stack_ch.push('(');//��ջ 
	gets(str);//��ñ��ʽ 
	strcat(str,c);//�����ַ����ĺ��� 
	for (i = 0; str[i]; i++){
		if(str[i] >= '0' && str[i] <= '9'){//��Ϊ��ֵ 
			number[k++] = str[i];
			continue;
		}
		number[k] = '\0';//����ַ���\0��β
		if (number[0]!='\0'){
			s = atoi(number);//atoi�������ַ������������ 
			number[0] = '\0';
			stack_num.push(s);//���ַ���ת�������ͣ�������ֵջ�� 
		} 
		k = 0;
		switch(str[i]){//+-(��3��������js1������*/��js2���������ȼ���ͬҪ�ֿ����� 
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
				stack_ch.pop();//����Ԫ�� 
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








