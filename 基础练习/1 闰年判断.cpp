#include<iostream>

int main()
{
	using namespace std;
	
	int year;
	cin >> year;
	
	if(year%4==0&&year%100!=0)
		cout << "yes";
		
	else if(year%400==0)
		cout << "yes";
		
	else
		cout << "no";

	return 0;
}
