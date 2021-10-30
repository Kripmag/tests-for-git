#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
/// <summary>
/// Принимает месяц и дни двух дат
/// </summary>
/// <param name="month1"></param>
/// <param name="day1"></param>
/// <param name="month2"></param>
/// <param name="day2"></param>
/// <returns>1 если первая дата ближе, 2 если вторая дата ближе</returns>
int LaterInYear(int month1, int day1, int month2, int day2)
{
	if (month1 < month2)
		return 2;
	if (month1 > month2)
		return  1;
	if (day1 < day2)
		return  2;
	if (day1 > day2)
		return  1;
}

int DaysInYear(int year)
{
	return 	IsLeapYear(year) ? 365 : 364;
}
int SeconsInHours(int hours)
{
	return hours * 60;
}
int main()
{
	cout << IsLeapYear(2000) << " 2000" << '\n';
	cout << IsLeapYear(2004) << " 2004" << '\n';
	cout << IsLeapYear(100) << " 100" << '\n';
	cout << IsLeapYear(200) << " 200" << '\n';
	cout << IsLeapYear(104) << " 104" << '\n';
}