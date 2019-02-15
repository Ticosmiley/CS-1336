//Author:         Henry Hazlett
//Course:         CS1336.003
//Date:           11/3/2017
//Assignment:     Lecture Homework #7 Exercise #1
//Compiler:       Visual Studio Community 2017

//Description:
//This program takes input for a height from the user and prints out a number of triangles of that height.
//It also takes another height from the user and prints an hourglass shape of that height.

#include <iostream>

using namespace std;

int main()
{
   int height; //the height input by the user

   do
   {
      cout << "Please enter an integer between 1 and 15\n";
      cin >> height;
   } while (height <= 1 || height >= 15);
   cout << endl;

   for (int i = height; i > 0; i--)
   {
      for (int j = 0; j < i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;

   for (int i = height; i > 0; i--)
   {
      for (int j = 0; j < height - i; j++)
      {
         cout << " ";
      }
      for (int j = 0; j < i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;

   for (int i = height; i > 0; i--)
   {
      for (int j = 0; j < i - 1; j++)
      {
         cout << " ";
      }
      for (int j = 0; j < 1 + 2 * (height - i); j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;

   for (int i = 0; i < height - 1; i++)
   {
      cout << " ";
   }
   cout << "*\n";
   for (int i = height; i > 2; i--)
   {
      for (int j = i - 2; j > 0; j--)
      {
         cout << " ";
      }
      cout << "*";
      for (int j = 0; j < 1 + 2 * (height - i); j++)
      {
         cout << " ";
      }
      cout << "*\n";
   }
   for (int i = 0; i < 2 * height - 1; i++)
   {
      cout << "*";
   }
   cout << endl << endl;

   do
   {
      cout << "Please enter an odd integer between 1 and 15\n";
      cin >> height;
   } while (height <= 1 || height >= 15 || height % 2 != 1);
   cout << endl;

   for (int i = 0; i < height; i++)
   {
      cout << "* ";
   }
   cout << endl;
   for (int i = 0; i < height / 2 - 1; i++)
   {
      for (int j = 0; j < 2 + 2 * i; j++)
      {
         cout << " ";
      }
      cout << "*";
      for (int j = height * 2 - 7 - i * 4; j > 0; j--)
      {
         cout << " ";
      }
      cout << "*\n";
   }
   for (int i = 0; i < height - 1; i++)
   {
      cout << " ";
   }
   cout << "*\n";
   for (int i = 0; i < height / 2 - 1; i++)
   {
      for (int j = height - 3 - i * 2; j > 0; j--)
      {
         cout << " ";
      }
      cout << "*";
      for (int j = 0; j < 3 + i * 4; j++)
      {
         cout << " ";
      }
      cout << "*\n";
   }
   for (int i = 0; i < height; i++)
   {
      cout << "* ";
   }
   cout << endl << endl;

   system("pause");
   return 0;
} //end fucntion main()