// ConsoleApplication2.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, b;
	
	cout << "Enter the first number" << endl;
	cin >> a;
	cout << endl;
	cout << "Enter the second number" << endl;
	cin >> b;
	cout << endl;

	double c;
	c = a + b;
	cout << a << " plus " << b << " equals to " << c << endl;
	cout << endl;
	cout << "The first resulst is " << c << endl;
	cout << endl;
	
	double d;
	d = c / a;
	cout << a << " Divided by " << c << " equals to " << d << endl;
	cout << endl;
	cout << "The final result is " << d << endl;
	cout << endl;

    return 0;
}