//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         10/9/2017
//Assignment:   Lecture Homework #5 Exercise #1
//Compiler:     Visual Studio Community 2017

//Description:
//This program takes input for an amount of seconds and reports how many seconds, minutes, hours, or days it equates to.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int seconds; //variable for input number of seconds

   cout << fixed;

   cout << "Please enter the number of seconds:     ";
   cin >> seconds;

   if (seconds < 60)
   {
      cout << seconds << " seconds is " << setprecision(2) << (double)seconds << " seconds.\n";
   }
   else if (seconds < 3600)
   {
      cout << seconds << " seconds is " << setprecision(2) << (double)seconds / 60 << " minutes.\n";
   }
   else if (seconds < 86400)
   {
      cout << seconds << " seconds is " << setprecision(2) << (double)seconds / 3600 << " hours.\n";
   }
   else
   {
      cout << seconds << " seconds is " << setprecision(2) << (double)seconds / 86400 << " days.\n";
   }

   system("pause");
   return 0;
} //end function main()