//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         10/23/2017
//Assignment:   Lecture Homework #6 Exercise #1
//Compiler:     Visual Studio Community 2017

//Description:
//This program executes several loops which each do different things including:
//listing the even integers from 2 to 100
//listing the mulitples of 3 from 99 to 3
//listing the powers of 2 from 2 to 1,048,576 and vice versa
//listing the first 25 numbers of the Fibonacci sequence
//creating a lovely design for a carpet

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int threes = 99; //variable that holds the multiples of 3 to be printed
   int twos = 2; //variable that holds the powers of 2 to be printed
   int loops = 0; //counts the number of times a loop has executed
   int fibonacci = 0; //used to calculate next number in the Fibonacci sequence
   int fibonacciAlso = 1; //used to calculate next number in the Fibonacci sequence

   //Part a
   cout << "Even integers from 2 to 100\n";
   cout << "--------------------------------------------------\n";
   for (int i = 2; i <= 100; i += 2)
   {
      cout << setw(5) << i;
      if (i % 20 == 0)
      {
         cout << endl;
      }
   }
   cout << "--------------------------------------------------\n\n";

   //Part b
   cout << "Multiples of 3 from 99 to 3\n";
   cout << "--------------------------------------------------\n";
   while (threes >= 3)
   {
      loops++;
      cout << setw(5) << threes;
      if (loops % 10 == 0)
      {
         cout << endl;
      }
      threes -= 3;
   }
   loops = 0;
   cout << "\n--------------------------------------------------\n\n";

   //Part c
   cout << "Powers of 2 from 2 to 1,048,576\n";
   cout << "--------------------------------------------------\n";
   do
   { 
      loops++;
      cout << setw(10) << twos;
      if (loops % 5 == 0)
      {
         cout << endl;
      }
      twos *= 2;
   } while (twos <= 1048576);
   loops = 0;
   cout << "--------------------------------------------------\n\n";

   //Part d
   cout << "Powers of 2 from 1,048,576 to 2\n";
   cout << "--------------------------------------------------\n";
   for (int i = 1048576; i >= 2; i /= 2)
   {
      loops++;
      cout << setw(10) << i;
      if (loops % 5 == 0)
      {
         cout << endl;
      }
   }
   loops = 0;
   cout << "--------------------------------------------------\n\n";
     
   //Part e
   cout << "Fibonacci sequence\n";
   cout << "--------------------------------------------------\n";
   while (fibonacci + fibonacciAlso < 50000)
   {
      loops++;
      if (loops == 1)
      {
         cout << setw(10) << fibonacci << setw(10) << fibonacciAlso;
         loops++;
      }
      else
      {
         cout << setw(10) << fibonacci + fibonacciAlso;
         fibonacciAlso = fibonacci + fibonacciAlso;
         fibonacci = fibonacciAlso - fibonacci;
      }
      if (loops % 5 == 0)
      {
         cout << endl;
      }
   }
   loops = 0;
   cout << "--------------------------------------------------\n\n";

   //Also part e
   cout << "Nice carpet pattern\n";
   cout << "--------------------------------------------------\n";
   for (int i = 0; i < 550; i++)
   {
      loops++;
      if (i % 7 == 0)
      {
         cout << "/";
      }
      else if ((loops <= 50 || (loops > 350 && loops <= 400)) && (i - 1) % 7 == 0)
      {
         cout << "\\";
      }
      else if (((loops > 50 && loops <= 100) || (loops > 400 && loops <= 450)) && (i - 3) % 7 == 0)
      {
         cout << "\\";
      }
      else if (((loops > 100 && loops <= 150) || (loops > 450 && loops <= 500)) && (i - 5) % 7 == 0)
      {
         cout << "\\";
      }
      else if (((loops > 150 && loops <= 200) || (loops > 500 && loops <= 550)) && (i - 7) % 7 == 0)
      {
         cout << "\\";
      }
      else if (loops > 200 && loops <= 250 && (i - 9) % 7 == 0)
      {
         cout << "\\";
      }
      else if (loops > 250 && loops <= 300 && (i - 11) % 7 == 0)
      {
         cout << "\\";
      }
      else if (loops > 300 && loops <= 350 && (i - 13) % 7 == 0)
      {
         cout << "\\";
      }
      else
      {
         cout << "@";
      }
      if (loops % 50 == 0)
      {
         cout << endl;
      }
   }
   cout << "--------------------------------------------------\n\n";

   system("pause");
   return 0;
} //end function main()