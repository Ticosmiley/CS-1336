//Author:        Henry Hazlett
//Class:         CS1336.003
//Date:          10/9/2017
//Assignment:    Lecture Homework #5 Exercise #2
//Compiler:      Visual Studio Community 2017

//Description:
//This program calculates the monthly phone bill based on which package the user has purchased and how many minutes they used. It also reports which package yields the best price.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   char package; //variable for which package the user purchased
   int minutes; //variable for number of minutes used by user
   const double A_RATE = 0.45; //price per extra minute for Package A
   const double B_RATE = 0.40; //price per extra minute for Package B
   double aCost; //total cost for Package A
   double bCost; //total cost for Package B
   double cCost = 69.99; //total cost for Package C
   char bestPrice; //variable to hold whichever package has the lowest price

   cout << fixed << setprecision(2);

   cout << "Which package did you purchase?\n";
   cin >> package;
   package = tolower(package);

   if (!(package >= 'a' && package <= 'c'))
   {
      cout << "\nya dun goofed\n\n";
   }
   else
   {
      cout << "How many minutes did you use?\n";
      cin >> minutes;

      if (minutes <= 450)
      {
         aCost = 39.99;
      }
      else
      {
         aCost = 39.99 + (minutes - 450) * A_RATE;
      }

      if (minutes <= 900)
      {
         bCost = 59.99;
      }
      else
      {
         bCost = 59.99 + (minutes - 900) * B_RATE;
      }

      if (aCost < bCost && aCost < cCost)
      {
         bestPrice = 'a';
      }
      else if (bCost < aCost && bCost < cCost)
      {
         bestPrice = 'b';
      }
      else
      {
         bestPrice = 'c';
      }

      switch (package)
      {
         case 'a':
            cout << endl << "Your monthly bill for Package A is: $" << aCost << endl;
            break;
         case 'b':
            cout << endl << "Your monthly bill for Package B is: $" << bCost << endl;
            break;
         case 'c':
            cout << endl << "Your monthly bill for Package C is: $" << cCost << endl;
            break;
      }

      if (package == bestPrice)
      {
         cout << "Congratulations! You have chosen the best package.\n\n";
      }
      else
      {
         switch (bestPrice)
         {
            case 'a':
               cout << "If you had chosen Package A, your bill would have only been: $" << aCost << endl << endl;
               break;
            case 'b':
               cout << "If you had chosen Package B, your bill would have only been: $" << bCost << endl << endl;
               break;
            case 'c':
               cout << "If you had chosen Package C, your bill would have only been: $" << cCost << endl << endl;
               break;
         }
      }
   }

   system("pause");
   return 0;
} //end function main()