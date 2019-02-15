//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         11/3/2017
//Assignment:   Lecture Homework #7 Exercise #2
//Compiler:     Visual Studio Community 2017

//Description:
//This program reads in numbers from Random.txt and determines how many numbers there are, what their sum is, 
//what the average is, what the smallest and second smallest numbers are, and what the largest and second 
//largest numbers are

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
   ifstream inFS; //input file stream
   int nextValue; //variable for the next number read from Random.txt
   int numbers = 0; //total number of numbers
   int sum = 0; //sum of all the numbers
   double avg; //average of all the numbers
   int minValue = 2000; //smallest value
   int minValue2 = 2000; //second smallest value
   int maxValue = -100; //largest value
   int maxValue2 = -100; //second largest value

   inFS.open("Random.txt");
   if (!inFS.good())
   {
      cout << "Random.txt could not be opened\n";
   }
   else
   {
      while (inFS.good())
      {
         inFS >> nextValue;

         numbers++;

         sum += nextValue;

         if (nextValue < minValue)
         {
            minValue = nextValue;
         }
         else if (nextValue < minValue2)
         {
            minValue2 = nextValue;
         }

         if (nextValue > maxValue)
         {
            maxValue = nextValue;
         }
         else if (nextValue > maxValue2)
         {
            maxValue2 = nextValue;
         }
      }
      inFS.close();

      avg = (double)sum / numbers;

      cout << setw(23) << left << "Number of numbers:" << setw(7) << right << numbers << endl;
      cout << setw(23) << left << "Sum of numbers:" << setw(7) << right << sum << endl;
      cout << setw(23) << left << "Average of numbers:" << fixed << setprecision(1) << setw(7) << right << avg << endl;
      cout << setw(23) << left << "Largest number:" << setw(7) << right << maxValue << endl;
      cout << setw(23) << left << "Smallest number:" << setw(7) << right << minValue << endl;
      cout << setw(23) << left << "Second largest number:" << setw(7) << right << maxValue2 << endl;
      cout << setw(23) << left << "Second smallest number:" << setw(7) << right << minValue2 << endl << endl;
   }

   system("pause");
   return 0;
} //end function main()