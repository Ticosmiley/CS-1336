//Author:         Henry Hazlett
//Course:         CS1336.003
//Date:           9/8/2017
//Assignment:     Lecture Homework #1 Exercise #2
//Compiler:       Visual Studio Community 2017

//Description: 
//This program uses a time variable and an acceleration variable to calculate distance travelled.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float time = 5.36;
	float acceleration = 32.0;
	double distance;

	distance = (1.0 / 2) * acceleration * time * time;

	cout << fixed << setprecision(1);

	cout << "The time was:                " << time << endl;
	cout << "The acceleration was:        " << acceleration << endl;
	cout << "The distance travelled was:  " << distance << endl;

	system("pause");
	return 0;
} //end function main()