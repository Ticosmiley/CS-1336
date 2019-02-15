//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         11/29/2017
//Assignment:   Lecture Homework #9 Exercise #1
//Compiler:     Visual Studio Community 2017

//Description:
//This program searches a list of integers for a certain set of numbers and reports the first index where they appear

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int searchList(int[], int, int);

int main()
{
   ifstream inFS; //input file stream
   int stdList[100]; //array to be searched
   int testList[50]; //array of numbers to be searched for
   int stdIndex = 0; //number of numbers in the standard list
   int testIndex = 0; //number of numbers in the search list
   int count = 0; //keeps track of array size when assigning values to the array

   inFS.open("LSStandard.txt");
   if (!inFS.good())
   {
      cout << "The file \"LSStandard.txt\" could not be opened.\n";
      system("pause");
      return 1;
   }
   while (count < 100 && inFS >> stdList[stdIndex])
   {
      count++;
      stdIndex++;
   }
   count = 0;
   inFS.close();

   inFS.open("LSTest.txt");
   if (!inFS.good())
   {
      cout << "The file \"LSTest.txt\" could not be opened.\n";
      system("pause");
      return 1;
   }
   while (count < 50 && inFS >> testList[testIndex])
   {
      count++;
      testIndex++;
   }
   inFS.close();
   
   for (int i = 0; i < testIndex; i++)
   {
      if (searchList(stdList, stdIndex, testList[i]) != -1)
      {
         cout << "Number " << i + 1 << " (" << setw(3) << testList[i] << ") was located at index " << searchList(stdList, stdIndex, testList[i]) << ".\n";
      }
      else
      {
         cout << "Number " << i + 1 << " (" << setw(3) << testList[i] << ") was not in the file.\n";
      }
   }

   system("pause");
   return 0;
} //end function main()

/**************************************************************************************************************
* Function: searchList (int stdList[], int numElems, int value)
* Descr:    This function searches the standard list for a specified value and returns the first index
*           where that value appears. It returns -1 if the value is not in the array
* Input:    stdList[]
*           The array to be searched
*           numElems
*           The number of elements in the array
*           value
*           The value to be searched for
**************************************************************************************************************/
int searchList(int stdList[], int numElems, int value)
{
   for (int i = 0; i < numElems; i++)
   {
      if (stdList[i] == value)
      {
         return i;
      }
   }
   return -1;
} //end function searchList()