#include <iostream>
using namespace std;
int main()
{
	int age;
	int age_in_month;
	
	int age_in_minuts;
	
	int age_in_second;
	
	int age_in_weeks;
	
	cout << "Enter your age in year only: ";
	cin >> age;
	age_in_month = age*12;
	age_in_minuts = age* 8640;
	age_in_weeks = age*48;
	age_in_second = age*518400;
	cout << "Your age in age_in_month is : " << age_in_month << endl;
	cout << "Your age in age_in_minuts is : " << age_in_minuts <<endl;
	cout << "Your age in age_in_weeks is : " << age_in_weeks << endl;
	cout << "Your age in age_in_second is : " << age_in_second << endl;
	return 0;
}