//Author:         Henry Hazlett
//Course:         CS1336.003
//Date:           9/11/2017
//Assignment:     Lecture Homework #2 Exercise #2
//Compiler:       Visual Studio Community 2017

//Description:
//This program takes input for celcius, fahrenheit, and Kelvin temperatures and converts them to the other types

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double celsius; // variable for input celcius temperature
	double fahrenheit; // variable for input fahreheit temperature
	double kelvin; // variable for input kelvin temperature

	cout << fixed << setprecision(2);

	cout << setw(45) << left << "Please enter a number in degrees Celcius:";
	cin >> celsius;
	cout << endl << setw(45) << left << "The equivalent Fahrenheit temperature is:";
	cout << (9.0 / 5) * celsius + 32 << " degrees." << endl;
	cout << setw(45) << left << "The equivalent Kelvin temperature is:"; 
	cout << celsius + 273.15 << " K." << endl << endl;

	cout << setw(45) << left << "Please enter a number in degress Fahrenheit:";
	cin >> fahrenheit;
	cout << endl << setw(45) << left << "The equivalent Celsius temperature is:";
	cout << (5.0 / 9) * (fahrenheit - 32) << " degrees." << endl;
	cout << setw(45) << left << "The equivalent Kelvin temperature is:";
	cout << (5.0 / 9) * (fahrenheit - 32) + 273.15 << " K." << endl << endl;

	cout << setw(45) << left << "Please enter a number in degrees Kelvin:";
	cin >> kelvin;
	cout << endl << setw(45) << left << "The equivalent Celsius temperature is:";
	cout << kelvin - 273.15 << " degrees." << endl;
	cout << setw(45) << left << "The equivalent Fahrenheit temperature is:";
	cout << (9.0 / 5) * (kelvin - 273.15) + 32 << " degrees." << endl;

	system("pause");
	return 0;
} //end function main()