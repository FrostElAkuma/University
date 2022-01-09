#include <iostream>
using namespace std;

int main () {
 //declaring the variables
 float courseWork, labWork, finalExam, totalMarks;
 //prompt the user for input
 cout<<"Please enter the course work, lab work, and final exam marks: ";
  cin>>courseWork>>labWork>>finalExam;
 //calculating total mark
 totalMarks = courseWork + labWork + finalExam;
 //output total mark
 cout<<"Total Marks: "<< totalMarks << endl;
 // Evaluating and outputting grade
  if (totalMarks >= 0 && totalMarks <=59) {
     cout<<"Grade: F";
  } else if (totalMarks >= 60 && totalMarks <=69){
      cout<<"Grade: D";
  } else if (totalMarks >= 70 && totalMarks <=79){
      cout<<"Grade: C";
  } else if (totalMarks >= 80 && totalMarks <=89){
      cout<<"Grade: B";
  } else if (totalMarks >= 90 && totalMarks <=100){
      cout<<"Grade: A";
  }

 return 0;
}
















