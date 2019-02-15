//Author:       Henry Hazlett
//Course:       CS1336.003
//Date:         11/6/2017
//Assignment:   Lectere Homework #8 Exercise #2
//Compiler:     Visual Studio Community 2017

//Description:
//This program takes 5 integer test scores from the user and determines the average after dropping the lowest score.

#include <iostream>
#include <iomanip>

using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
   int score1; //first test score
   int score2; //second test score
   int score3; //third test score
   int score4; //fourth test score
   int score5; //fifth test score

   getScore(score1);
   getScore(score2);
   getScore(score3);
   getScore(score4);
   getScore(score5);

   cout << endl;

   calcAverage(score1, score2, score3, score4, score5);

   system("pause");
   return 0;
} //end function main()

/************************************************************************************************************
* Function: getScore (int& score)
* Descr:    This function takes an integer from the user and assigns it to a reference parameter variable.
*           It also checks that the integer is between 0 and 100.
* Input:    score
*           The variable that the integer will be assigned to.
* Return:   Void
************************************************************************************************************/
void getScore(int& score)
{
   do
   {
      cout << "Enter a test score between 0 and 100\n";
      cin >> score;
   } while (score < 0 || score > 100);

   return;
} //end function getScore()

/************************************************************************************************************
* Function: calcAverage (int score1, int score2, int score3, int score4, int score5)
* Descr:    This function takes 5 integers and finds their average after dropping the smallest value. It 
*           the prints a message with the average and the lowest score.
* Input:    score1, score2, score3, score4, score5
*           The integers to find the average of.
* Return:   Void
************************************************************************************************************/
void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
   int lowest;
   int total;
   double avg;

   lowest = findLowest(score1, score2, score3, score4, score5);
   total = score1 + score2 + score3 + score4 + score5 - lowest;
   avg = total / 4.0;

   cout << "The average of the test scores is " << fixed << setprecision(2) << avg << " after dropping the lowest score of " << lowest << endl << endl;

   return;
} //end function calcAverage()

/************************************************************************************************************
* Function: findLowest (int score1, int score2, int score3, int score4, int score5)
* Descr:    This function takes 5 integers and determines which of them is the smallest. It then returns
*           that value.
* Input:    score1, score2, score3, score4, score5
*           The integers to find the mowest value of.
* Return:   The smallest integer.
************************************************************************************************************/
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
   if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
   {
      return score1;
   }
   else if (score2 < score3 && score2 < score4 && score2 < score5)
   {
      return score2;
   }
   else if (score3 < score4 && score3 < score5)
   {
      return score3;
   }
   else if (score4 < score5)
   {
      return score4;
   }
   else
   {
      return score5;
   }
} //end function findLowest()