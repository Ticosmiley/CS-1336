//Author:        Henry Hazlett
//Course:        CS1336.003
//Date:          9/27/2017
//Assignment:    Lecture Homework #4 Exercise #1
//Compiler:      Visual Studio Commmunity 2017

//Description:
//This program takes input for the principal in a savings account, the interest rate, and how many times the interest is compounded. 
//It then reports the interest earned and the total savings accrued.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double principal; //variable for the input principal amount
   double interestRate; //variable for the input interet rate
   double timesCompounded; //variable for the number of times the interest is compounded
   double total; //variable for the total amount in the savings account after calculating interest

   cout << "Enter the principal:\n";
   cin >> principal;
   cout << endl << "Enter the interest rate:\n";
   cin >> interestRate;
   cout << endl << "Enter the number of times the interest is compounded:\n";
   cin >> timesCompounded;

   interestRate /= 100;
   total = principal * pow((1 + interestRate / timesCompounded), timesCompounded);

   cout << endl << fixed << setprecision(2) << setw(21) << left << "Interest Rate:" << setw(9) << right << interestRate * 100 << "%\n";
   cout << setprecision(0) << setw(21) << left << "Times Compounded:" << setw(9) << right << timesCompounded << endl;
   cout << setprecision(2) << setw(21) << left << "Principal:" << "$" << setw(8) << right << principal << endl;
   cout << setw(21) << left << "Interest:" << "$" << setw(8) << right << total - principal << endl;
   cout << setw(21) << left << "Amount in Savings:" << "$" << setw(8) << right << total << endl << endl;

   system("pause");
   return 0;
}//end function main()