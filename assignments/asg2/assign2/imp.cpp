#include "header.h"
//student class
void Student::getID(string ID){
    //making a file var called inFile1
    ifstream inFile1;
    //opening a file and put it inside File1
    inFile1.open("student.txt");
    //Checking if there is any errors with opening the file
    if (!inFile1) {
        cout<<"there was an error with opening File1";
    }
    //making a var where we can store each line
    string line;
    //looping over each line and saving it in line
    while(getline(inFile1, line)) {
        //my temp variables
        string testID, f, s, m;
        //counting how many words each line has so i can put the major name in one string var later
        int wordCount = 1; // we initialized it to 1 so we include the first word
        //the loop to count how many words a line has
        for(int i = 0; i < line.length(); i++)
        {
            if(line[i] == 32) //32 is space in ASCII
            {
                wordCount += 1;
            }
        }
        //an array where we will save all words in
        string arr[wordCount];
        //making our line into a stream so we can use it like cin
        istringstream stream(line);
        //looping over each word in line and putting it inside our array
        for( int i = 0; i < wordCount; i++)
        {
            stream >> arr[i];
        }
        //assigning values to out temp variables
        testID = arr[0];
        f = arr[1];
        s = arr[2];
        // A special loop so we can get the full major name inside 1 variable in correct format
        for(int j = 3; j < wordCount; j++)
        {
            if (j == 3)
            {
                m += arr[j];
            }

            else{
                m+= " " + arr[j];
            }
        }
        //checking if this line is the line that we are looking for then calling our set function
        if(testID == ID)
        {
            set(testID, f, s, m);
            break;
        }
    }

};

void Student::set(string Id, string fname, string lname, string maj) {

    ID = Id;
    firstName = fname;
    lastName = lname;
    major = maj;
};

void Student::get(string &a, string &b, string &c, string &d)const {

    a = ID;
    b = firstName;
    c = lastName;
    d = major;
};

void Student::print()const {

    string id, fname, lname, maj;
    get(id, fname, lname, maj);
    cout<<id<<setw(7)<<fname<<setw(14)<<lname<<setw(17)<<maj<<endl;
};

Student::Student(string Id, string fname, string lname, string maj){
    ID = Id;
    firstName = fname;
    lastName = lname;
    major = maj;
};
//course class
void Course::set(string c) {
    //making a file var called inFile1
    ifstream inFile3;
    //opening a file and put it inside File1
    inFile3.open("course.txt");
    //Checking if there is any errors with opening the file
    if (!inFile3) {
        cout<<"there was an error with opening File3";
    }
    //making a var where we can store each line
    string line;
    //looping over each line and saving it in line
    while(getline(inFile3, line)) {
        //my temp variables
        string testC, s;
        string credit;
        //counting how many words each line has so i can put the course name in one string var later
        int wordCount = 1; // we initialized it to 1 so we include the first word
        //the loop to count how many words a line has
        for(int i = 0; i < line.length(); i++)
        {
            if(line[i] == 32) //32 is space in ASCII
            {
                wordCount += 1;
            }
        }
        //an array where we will save all words in
        string arr[wordCount];
        //making our line into a stream so we can use it like cin
        istringstream stream(line);
        //looping over each word in line and putting it inside our array
        for( int i = 0; i < wordCount; i++)
        {
            stream >> arr[i];
        }
        //assigning values to our temp variables
        testC = arr[0];
        credit = arr[1];

        // A special loop so we can get the full major name inside 1 variable in correct format
        for(int j = 2; j < wordCount; j++)
        {
            if (j == 2)
            {
                s += arr[j];
            }

            else{
                s+= " " + arr[j];
            }
        }
        //checking if this line is the line that we are looking for then calling our set function
        if(testC == c)
        {
            code = testC;
            title = s;
            numberOfCredits = stod(credit);
            break;
        }
    }
};

void Course::get(string &a, string &b, double &c)const {

    a = code;
    b = title;
    c = numberOfCredits;
};

void Course::print()const {
    string cCode, tit;
    double cr;
    get(cCode, tit, cr);
    cout << left << setw(13) << cCode <<left<< setw(31) << tit;
};

Course::Course(string c){
    set(c);
};
//record class
void Record::set(string testID, string code, double mark, string sem) {

    studentID = testID;
    courseCode = code;
    courseMark = mark;
    semesterTaken = sem;

    if (mark >= 95) {
        courseGrade = "A";
    }
    else if (mark >= 90) {
        courseGrade = "A";
    }
    else if (mark >= 85){
        courseGrade = "B+";
    }
    else if (mark >= 80){
        courseGrade = "B";
    }
    else if (mark >= 75){
        courseGrade = "C+";
    }
    else if (mark >= 70){
        courseGrade = "C";
    }
    else if (mark >= 65){
        courseGrade = "D+";
    }
    else if (mark >= 60){
        courseGrade = "D";
    }
    else{
        courseGrade = "F";
    }

};

void Record::get(string &b, double &x, string &c, string &d)const {

    b = courseCode;
    x = courseMark;
    c = semesterTaken;
    d = courseGrade;
};

void Record::print()const {
    string cCode, sem, cGrade;
    double cMark;
    get(cCode, cMark, sem, cGrade);
    cout<< setw(6) << cMark << setw(6) << cGrade << setw(6) << sem << endl;
};

Record::Record(string testID, string code, double mark, string sem){

    set(testID, code, mark, sem);
};
//SIS class
void Sis::set(){
    //I am not sure if this is supposed to empty but in the driver there is no input to set ?
};

void Sis::studentInformation(string ID){

    students[0].getID(ID);
    cout<<endl;
    cout<< "\t\t      TRANSCRIPT"<<endl<<endl;
    students[0].print();
    cout<<setfill('=')<<setw(66) << "=" <<endl<<endl;
    //making a file var called inFile2
    ifstream inFile2;
    //opening a file and put it inside File2
    inFile2.open("record.txt");
    //Checking if there is any errors with opening the file
    if (!inFile2) {
        cout<<"there was an error with opening File2";
    }
    //making a var where we can store each line
    string line;
    //counter for number of records that a student has
    int x = 0;
    //looping over each line and saving it in line
    while(getline(inFile2, line)) {
        //my temp variables
        string testID, code, grade, sem;
        double mark;
        //making our line into a stream so we can use it like cin
        istringstream stream(line);
        stream >> testID >> code >> mark >> sem;
        //If we find a record of the student we save it and increment the NO. records
        if(testID == ID)
        {
            courses[x].set(code);
            records[x].set(testID, code, mark, sem);
            x++;
        }
    }
    //printing the records
    cout<<setfill(' ')<<"  Code"<<setw(15)<<"Title"<<setw(29)<<"Mark  "<<"Grade "<<"Semester  "<<endl;
    cout<<setfill('=')<<setw(66) << "="<<endl;
    for(int i = 0; i < x; i++)
    {
        cout<<setfill(' ');
        courses[i].print();
        records[i].print();
    }
    cout<<setfill('=')<<setw(66) << "="<<endl;

    //calculate starts GPA here
    double gp = 0, totalScore = 0, totalCredits = 0;
    //vars for record get function
    string cCode, sem, cGrade;
    double cMark;
    //vars for courses get function
    string cod, tit;
    double cr;
    //loop for getting total score and total credits
    for(int i = 0; i < x; i++)
    {

        records[i].get(cCode, cMark, sem, cGrade);
        courses[i].get(cod, tit, cr);
        //GPA calculation process
        if (cMark >= 95) {
            totalScore += 4.0*cr;
            totalCredits += cr;
        }
        else if (cMark >= 90) {
            totalScore += 4.0*cr;
            totalCredits += cr;
        }
        else if (cMark >= 85){
            totalScore += 3.5*cr;
            totalCredits += cr;
        }
        else if (cMark >= 80){
            totalScore += 3.0*cr;
            totalCredits += cr;
        }
        else if (cMark >= 75){
            totalScore += 2.5*cr;
            totalCredits += cr;
        }
        else if (cMark >= 70){
            totalScore += 2.0*cr;
            totalCredits += cr;
        }
        else if (cMark >= 65){
            totalScore += 1.5*cr;
            totalCredits += cr;
        }
        else if (cMark >= 60){
            totalScore += 1.0*cr;
            totalCredits += cr;
        }
        else{
            totalScore += 0.0*cr;
            totalCredits += cr;
        }

    }
    //getting the finale GPA
    gp = totalScore/totalCredits;
    //printing the GPA
    cout<<endl<<setfill(' ')<<"The GPA is: "<< gp << endl<<endl;
};

void Sis::courseInformation(string code){

    cout<<endl<<"\t\t Student List"<<endl;
    courses[0].set(code);
    string cCode, tit;
    double cr;
    courses[0].get(cCode, tit, cr);
    cout<<endl<< left << setw(13) << cCode << tit << right << setw(8) << cr << endl;
    cout<<setfill('=')<<setw(61) << "="<<endl;
    cout<<setfill(' ');

    //making a file var called inFile2
    ifstream inFile2;
    //opening a file and put it inside File2
    inFile2.open("record.txt");
    //Checking if there is any errors with opening the file
    if (!inFile2) {
        cout<<"there was an error with opening File2";
    }
    //making a var where we can store each line
    string line;
    //counter for number of records that a student has
    int x = 0;
    //looping over each line and saving it in line
    while(getline(inFile2, line)) {
        //my temp variables
        string testID, testCode, grade, sem;
        double mark;
        //making our line into a stream so we can use it like cin
        istringstream stream(line);
        stream >> testID >> testCode >> mark >> sem;
        //If we find a record of the student we save it and increment the NO. records
        if(testCode == code)
        {
            students[x].getID(testID);
            records[x].set(testID, testCode, mark, sem);
            x++;
        }
    }

    cout<<endl<<left << setw(12)<<"  ID"<<"First Name  Last Name   Mark  Grade Semester"<<endl;
    cout<<setfill('=')<<setw(61) << "="<<endl;
    cout<<setfill(' ');
    for(int i = 0; i < x; i++)
    {
        string id, fn, ln, mj;
        students[i].get(id, fn, ln, mj);
        cout<< id << "   " << left << setw(12) <<fn << setw(12) << ln;
        records[i].print();
    }
    cout<<setfill('=')<<setw(61) << "="<<endl;
    cout<<setfill(' ');

    //getting highest mark and the student info
    double highestMark = 0;
    string id, name1, name2;
    //looping over all the records of that subject and it's students
    for(int i = 0; i < x; i++)
    {
        string courseC, semTaken, cGrade, iD, fn, ln, mj;
        double mk;
        students[i].get(iD, fn, ln, mj);
        records[i].get(courseC, mk, semTaken, cGrade);
        if(mk > highestMark)
        {
            highestMark = mk;
            id = iD;
            name1 = fn;
            name2 = ln;
        }

    }
    cout<<endl<<"Highest mark is: " << highestMark << " Scored by: " << id << "   " << name1 << " " << name2<<endl;
};

Sis::Sis()
{
   numberOfcourses = 0;
   numberOfStudents = 0;
   numberOfRecords = 0;
};

