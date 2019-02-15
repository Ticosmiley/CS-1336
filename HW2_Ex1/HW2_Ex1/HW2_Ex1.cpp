//Author:         Henry Hazlett
//Course:         CS1336.003
//Date:           9/11/2017
//Assignment:     Lecture Homework #2 Exercise #1
//Compiler:       Visual Studio Community 2017

//Description:
//This program takes the distance driven in town and on the highway and calculates the total number of gallons of gas required

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double TOWN_MILEAGE = 23.5; // constant variable for gas mileage while driving in town
	const double HWY_MILEAGE = 28.9; // constant variable for gas mileage while driving on the highway
	double townDistance; // variable for input distance driven in town
	double hwyDistance; // variable for input distance driven on highway

	cout << fixed << setprecision(1);

	cout << "Please enter the number of in-town driving miles: ";
	cin >> townDistance;
	cout << "Please enter the number of highway driving miles: ";
	cin >> hwyDistance;

	cout << endl << "The total number of gallons required is: " << townDistance / TOWN_MILEAGE + hwyDistance / HWY_MILEAGE << " gal." << endl;

	system("pause");
	return 0;
} // end function main()