//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         10/23/2017
//Assignment:   Lecture Homework #6 Exercise 2
//Compiler:     Visual Studio Community 2017

//Description:
//This program takes input for the daily sales of 5 stores and displays them on a bar chart

#include <iostream>
#include <string>

using namespace std;

int main()
{
   long long store1; //variable for the sales of store 1
   long long store2; //variable for the sales of store 2
   long long store3; //variable for the sales of store 3
   long long store4; //variable for the sales of store 4
   long long store5; //variable for the sales of store 5

   do
   {
      cout << "Enter today's sales for store 1: ";
      cin >> store1;
   } while (store1 < 0);
   do
   {
      cout << "Enter today's sales for store 2: ";
      cin >> store2;
   } while (store2 < 0);
   do
   {
      cout << "Enter today's sales for store 3: ";
      cin >> store3;
   } while (store3 < 0);
   do
   {
      cout << "Enter today's sales for store 4: ";
      cin >> store4;
   } while (store4 < 0);
   do
   {
      cout << "Enter today's sales for store 5: ";
      cin >> store5;
   } while (store5 < 0);

   cout << "\nSALES BAR CHART\n";
   cout << "(Each * = $100)\n";

   cout << "Store 1: ";
   for (int i = 0; i < store1 / 100; i++)
   {
      cout << "*";
   }
   cout << endl << "Store 2: ";
   for (int i = 0; i < store2 / 100; i++)
   {
      cout << "*";
   }
   cout << endl << "Store 3: ";
   for (int i = 0; i < store3 / 100; i++)
   {
      cout << "*";
   }
   cout << endl << "Store 4: ";
   for (int i = 0; i < store4 / 100; i++)
   {
      cout << "*";
   }
   cout << endl << "Store 5: ";
   for (int i = 0; i < store5 / 100; i++)
   {
      cout << "*";
   }
   cout << endl << endl;

   system("pause");
   return 0;
} //end function main()