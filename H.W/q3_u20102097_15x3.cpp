#include <iostream>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Declaring our variables
    string key = "TFFTFFTTTT";
    string studentA, studentId;
    int grade = 0;
    //giving the key
    cout << "The correct answers are : " << key;
    //propmting user for input
    cout << "\nEnter the student's ID and answers : ";
     cin >> studentId >> studentA;
    //Getting the length of the answer key
    int length = key.length();
    //calculating grade
    for (int i = 0; i < length; i++)
    {
        if (studentA[i] == key[i])
        {
            grade += 2;
        }

        else
        {
            grade -= 1;
        }
    }
    //Outputting results
    cout << studentId << "  " << grade;
    //No errors
    return 0;
}
