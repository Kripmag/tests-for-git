#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}


int main()
{
	cout << IsLeapYear(2000) << " 2000" << '\n';
	cout << IsLeapYear(2004) << " 2004" << '\n';
	cout << IsLeapYear(100) << " 100" << '\n';
	cout << IsLeapYear(200) << " 200" << '\n';
	cout << IsLeapYear(104) << " 104" << '\n';
}