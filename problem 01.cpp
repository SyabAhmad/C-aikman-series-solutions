#include <iostream>
using namespace std;
int main()
{
	float r;
	float area;
	float pi = 3.141;
	cout << "Enter redius: " ;
	cin >> r;
	area = pi * (r*r);
	cout << "Area: " << area;
	return 0;
}