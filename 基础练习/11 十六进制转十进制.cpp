#include<iostream>
#include<string> 
using namespace std;
int main()
{
	string s;
	while(cin >> s)
	{
		int  len=s.length();
		long long sum=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]>='A'&&s[i]<='F')
				sum=sum*16+s[i]-'A'+10;
			else
				sum=sum*16-'0';
		}
		cout << sum;
	}
	return 0;
}


2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        int len = s.length();
        long long sum = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] >= 'A' && s[i] <= 'F') {
                sum = sum * 16 + s[i] - 'A' + 10;
            }
            else {
                sum = sum * 16 + s[i] - '0';
            }
        }
        cout << sum;
    }
    return 0;
}
