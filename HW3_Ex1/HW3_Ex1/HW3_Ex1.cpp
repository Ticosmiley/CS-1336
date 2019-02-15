//Author:           Henry Hazlett
//Course:           CS1336.003
//Date:             9/22/2017
//Assignment:       Lecture Homework #3 Exercise #1
//Compiler:         Visual Studio Community 2017

//Description:
//This program calculates the average rainfall during three months using input values.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
   string month1; //variable for first input month
   string month2; //variable for second input month
   string month3; // variable for third input month
   double rain1; // varibale for rainfall during first month
   double rain2; // variable for rainfall during second month
   double rain3; // variable for rainfall during third month
   double avgRain; // variable for calculated average rainfall

   cout << "Enter the first month:" << endl;
   cin >> month1;
   cout << endl << "Enter the amount of rain during the first month in inches:" << endl;
   cin >> rain1;

   cout << endl << "Enter the second month:" << endl;
   cin >> month2;
   cout << endl << "Enter the amount of rain during the second month in inches:" << endl;
   cin >> rain2;

   cout << endl << "Enter the third month:" << endl;
   cin >> month3;
   cout << endl << "Enter the amount of rain during the third month in inches:" << endl;
   cin >> rain3;

   avgRain = (rain1 + rain2 + rain3) / 3;
   cout << endl << fixed << setprecision(2) << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " was " << avgRain << " inches." << endl;

   system("pause");
   return 0;
} //end function main()