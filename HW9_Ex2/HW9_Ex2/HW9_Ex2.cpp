//Author:      Henry Hazlett
//Course:      CS1336.003
//Date:        11/29/2017
//Assignment:  Lecture Homework #9 Exercise #2
//Compiler:    Visual Studio Community 2017

//Description:
//This program takes student answers for an exam and reports the scores of the students, which problems they missed, and which were the best and worst scores

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
   ifstream inFS; //input file stream
   ofstream outFS; //output file stream
   char answerKey[20]; //array holding the correct answers
   char studentAnswers[300]; //array holding student answers
   int count = 0; //number of student answers
   int numWrong = 0; //number of questions missed by a student
   double percentage = 0; //percentage score for a student
   int bestScore = -1; //highest score made by any student
   int bestStudent = 0; //student that made the highest score
   int worstScore = 101; //lowest score made by any student
   int worstStudent = 0; //student that made the lowest score
   bool firstMiss; //whether or not the first question missed is being reported

   inFS.open("CorrectAnswers.txt");
   if (!inFS.good())
   {
      cout << "The file \"CorrectAnswers.txt\" could not be opened.\n";
      system("pause");
      return 1;
   }
   for (int i = 0; i < 20; i++)
   {
      inFS >> answerKey[i];
   }
   inFS.close();

   inFS.open("StudentAnswers.txt");
   if (!inFS.good())
   {
      cout << "The file \"StudentAnswers.txt\" could not be opened.\n";
      system("pause");
      return 1;
   }
   while (count < 300 && inFS >> studentAnswers[count])
   {
      count++;
   }
   inFS.close();

   outFS.open("ExamAnalysis.txt");
   for (int i = 0; i < count / 20; i++)
   {
      cout << "Report for Student " << i + 1 << ":\n";
      outFS << "Report for Student " << i + 1 << ":\n";
      cout << "---------------------\n";
      outFS << "---------------------\n";
      for (int j = 0; j < 20; j++)
      {
         if (answerKey[j] != studentAnswers[j + i * 20])
         {
            numWrong++;
         }
      }
      percentage = ((double)(20 - numWrong) / 20) * 100;
      if (percentage < worstScore)
      {
         worstScore = percentage;
         worstStudent = i + 1;
      }
      if (percentage > bestScore)
      {
         bestScore = percentage;
         bestStudent = i + 1;
      }
      cout << "Missed " << numWrong << " out of 20 questions for " << fixed << setprecision(0) << percentage << "% correct.\n";
      outFS << "Missed " << numWrong << " out of 20 questions for " << fixed << setprecision(0) << percentage << "% correct.\n";
      if (numWrong > 0)
      {
         cout << "Questions missed:\n\t";
         outFS << "Questions missed:\n\t";
         firstMiss = true;
         for (int j = 0; j < 20; j++)
         {
            if (answerKey[j] != studentAnswers[j + i * 20] && firstMiss)
            {
               cout << j + 1 << "(" << studentAnswers[j + i * 20] << "/" << answerKey[j] << ")";
               outFS << j + 1 << "(" << studentAnswers[j + i * 20] << "/" << answerKey[j] << ")";
               firstMiss = false;
            }
            else if (answerKey[j] != studentAnswers[j + i * 20])
            {
               cout << ", " << j + 1 << "(" << studentAnswers[j + i * 20] << "/" << answerKey[j] << ")";
               outFS << ", " << j + 1 << "(" << studentAnswers[j + i * 20] << "/" << answerKey[j] << ")";
            }
         }
         cout << endl;
         outFS << endl;
      }
      numWrong = 0;
      if (percentage >= 70)
      {
         cout << "This student passed the exam!\n\n";
         outFS << "This student passed the exam!\n\n";
      }
      else
      {
         cout << "This student failed the exam.\n\n";
         outFS << "This student failed the exam.\n\n";
      }
   }
   cout << "Student " << bestStudent << " had the best grade with " << bestScore << "%.\n";
   outFS << "Student " << bestStudent << " had the best grade with " << bestScore << "%.\n";
   cout << "Student " << worstStudent << " had the worst grade with " << worstScore << "%.\n\n";
   outFS << "Student " << worstStudent << " had the worst grade with " << worstScore << "%.\n";
   outFS.close();

   system("pause");
   return 0;
} //end function main()