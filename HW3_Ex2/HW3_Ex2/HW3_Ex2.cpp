//Author:          Henry Hazlett
//Course:          CS1336.003
//Date:            9/22/2017
//Assignment:      Lecture Homework #3 Exercise #2
//Compiler:        Vidual Studio Community 2017

//Description:
//This program asks the user for the amount of a loan, the annual interest rate, and the number of payments to be made, and reports what the monthly interest rate will be,
//what the monthly payment will be, how much in total will be paid back, and how much interest in total will be paid.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double loanAmount; //variable for input loan amount
   double annualRate; //variable for input annual interest rate
   double monthlyRate; //variable for calculated monthly rate
   int numPayments; //variable for input number of payments
   double monthlyPayment; //variable for calculated monthly payment amount
   double amountPaid; //variable for calculated total amount paid

   cout << "Enter the amount of your loan:" << endl;
   cin >> loanAmount;
   cout << "Enter the annual interest rate:" << endl;
   cin >> annualRate;
   cout << "Enter the number of payments:" << endl;
   cin >> numPayments;

   annualRate /= 100;
   monthlyRate = annualRate / 12;
   monthlyPayment = ((monthlyRate * pow(1 + monthlyRate, numPayments)) / (pow(1 + monthlyRate, numPayments) - 1)) * loanAmount;
   amountPaid = monthlyPayment * numPayments;

   cout << endl << fixed << setprecision(2) << setw(25) << left << "Loan Amount:";
   cout << "$ " << setw(9) << right << loanAmount << endl;
   cout << setw(25) << left << "Annual Interest Rate:";
   cout << setw(11) << right << annualRate * 100 << "%" << endl;
   cout << setw(25) << left << "Number of Payments:";
   cout << setw(11) << right << setprecision(0) <<  numPayments << endl;
   cout << setprecision(2) << setw(25) << left << "Monthly Payment:";
   cout << "$ " << setw(9) << right << monthlyPayment << endl;
   cout << setw(25) << left << "Amount Paid Back:";
   cout << "$ " << setw(9) << right << amountPaid << endl;
   cout << setw(25) << left << "Interest Paid:";
   cout << "$ " << setw(9) << right << amountPaid - loanAmount << endl;

   system("pause");
   return 0;
} // end function main()