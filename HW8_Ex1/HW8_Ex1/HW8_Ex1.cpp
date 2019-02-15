//Author:        Henry Hazlett
//Course:        CS1336.003
//Date:          11/6/2017
//Assignment:    Lecture Homework #8 Exercise #1
//Compiler:      Visual Studio Community 2017

//Description:
//This program takes an integer between 1 and 100 from the user and finds the first that many primes.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool isPrime(int);

int main()
{
   int userNum; //integer input by the user
   int nextNum = 2; //next number to be checked if prime
   int primes = 0; //number of primes found so far
   ofstream outFS; //output file stream

   do
   {
      cout << "Enter a number between 1 and 100\n";
      cin >> userNum;
   } while (userNum < 1 || userNum > 100);

   outFS.open("PrimeOut.txt");

   if (!outFS.is_open())
   {
      cout << "Output file could not be opened\n";
   }
   else
   {
      if (userNum == 1)
      {
         cout << endl << "The first prime:\n";
         outFS << "The first prime:\n";
      }
      else
      {
         cout << endl << "The first " << userNum << " primes:\n";
         outFS << "The first " << userNum << " primes:\n";
      }

      while (primes < userNum)
      {
         if (isPrime(nextNum))
         {
            primes++;
            cout << setw(5) << nextNum;
            outFS << setw(5) << nextNum;
            if (primes % 10 == 0)
            {
               cout << endl;
               outFS << endl;
            }
         }
         nextNum++;
      }

      if (primes % 10 != 0)
      {
         cout << endl;
      }
      cout << endl;
   }

   outFS.close();

   system("pause");
   return 0;
} //end function main()

/************************************************************************************************
* Function: isPrime (int number)
* Descr:    This function takes an integer as input and then determines whether that integer 
*           is prime or not. It works by checking whether the given number is divisible by any
*           of the numbers that are less than it.
* Input:    number
*           The integer input.
* Return:   A boolean corresponding to whether the integer is prime.
************************************************************************************************/
bool isPrime(int number)
{
   for (int i = 2; i < number; i++)
   {
      if (number % i == 0)
      {
         return false;
      }
   }
   return true;
} //end function isPrime()