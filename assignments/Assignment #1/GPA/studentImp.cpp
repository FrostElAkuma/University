#include "student.h"
/*MATH calc 4 69
    ENG english 3 71
    OM oman 2 83
    CHEM chemestiry 4 78
    END english2 3 75
    BIO biology1 4 87*/
student::student(string a, string b, int x) {
    //assigning default values
    id = a;
    name = b;
    numberOfCourses = x;

    for(int i = 0; i < x; i++) {
        list[i].code = "1501210";
        list[i].title = "Programming II";
        list[i].credit = 3;
        list[i].mark = 70;
    }
    calculateGPA();
};

void student::set(string a, string b, int x) {

    string cod, tit;
    int cre, mar;

    id = a;
    name = b;
    numberOfCourses = x;
    //prompting user for input
    cout<<"Enter the code, title, credit and mark of "<< x <<" courses:"<<endl;
    for(int i = 0; i < x; i++) {

        cin>>cod>>tit>>cre>>mar;

        list[i].code = cod;
        list[i].title = tit;
        list[i].credit = cre;
        list[i].mark = mar;
    }
    calculateGPA();
}

void student::get(string &a, string &b, int &x, float &y)const {

    a = id;
    b = name;
    x = numberOfCourses;
    y = GPA;
}

float student::findWeight(int x) const{

    float totalScore, gp;
    int mark, credit, totalCredits = 0;

    for(int i = 0; i < x; i++){

        mark = list[i].mark;
        credit = list[i].credit;
        //gpa calculation process


            if (mark >= 95) {
                totalScore += 4.0*credit;
                totalCredits += credit;
            }
            else if (mark >= 90) {
                totalScore += 4.0*credit;
                totalCredits += credit;
            }
            else if (mark >= 85){
                totalScore += 3.5*credit;
                totalCredits += credit;
            }
            else if (mark >= 80){
                totalScore += 3.0*credit;
                totalCredits += credit;
            }
            else if (mark >= 75){
                totalScore += 2.5*credit;
                totalCredits += credit;
            }
            else if (mark >= 70){
                totalScore += 2.0*credit;
                totalCredits += credit;
            }
            else if (mark >= 65){
                totalScore += 1.5*credit;
                totalCredits += credit;
            }
            else if (mark >= 60){
                totalScore += 1.0*credit;
                totalCredits += credit;
            }
            else{
                totalScore += 0.0*credit;
                totalCredits += credit;
            }

    }

    gp = totalScore/totalCredits;

    return gp;
}

void student::calculateGPA() {
    //Getting the gpa
    GPA = findWeight(numberOfCourses);
}

void student::print()const{

    string i, nam;
    int crsnum;
    float gp;
    //getting the info we need using the get function
    get(i, nam, crsnum, gp);

    cout<<"GPA of student "<< i <<" "<< nam <<" for the " << crsnum <<" courses is " << gp <<endl;

}
