#include <iostream>
using namespace std;
int main()
{
	int rupee;
	int doller = 99;
	int total_amount;
	cout << "Enter amount of Rupee to Convert : ";
	cin >> rupee;
	total_amount = doller * rupee;
	cout << "Converted amount to doller is : " << total_amount <<endl;
	return 0;
}