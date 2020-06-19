//C++ Program to understand Object Oriented Programming

/* Object oriented programming basically makes our work easy
as we have to not make different user defined variable and functions for different objects.

And it is different from structure as it provides security of
personal data when we keep our variable in private version.

*/

#include<bits/stdc++.h>
using namespace std;

class student
{
    private://This make the data member private and are not accessible to the function outside the class.

        //Data Members
        string student_name;
        int student_rollnumber;
        string student_bloodgroup;
        long int student_mobnumber;
        string father_name;
    

    public:
        //Function Members:
        //Only this function can access the data members.
        //And this function is called by the class's object in the main function
        void setData(string stdname, int stdroll, string bloodgrp, long int mobno, string fthrname)//this function will help to set the data when called up in main function
        {
            student_name = stdname;
            student_rollnumber = stdroll;
            student_bloodgroup = bloodgrp;
            student_mobnumber = mobno;
            father_name = fthrname;

        }

        void displayData()//This function is used to display the student detail set by setData function, when called up by main function.
        {
            cout << "Student's name: " << student_name << endl;
            cout << "Student's roll number: " << student_rollnumber << endl;
            cout << "Student's blood group: " << student_bloodgroup << endl;
            cout << "Student's mobile number: " << student_mobnumber << endl;
            cout << "Student's father's name: " << father_name << endl;
            cout << endl << endl;
        }
};

int main(int argc, char const *argv[])
{
    student s1, s2, s3, s4;//This is the object of the class and will be used for the 4 students' details
    s1.setData("Kaushal", 21, "B+", 9329083112, "Roshan Das");//We have set the according to the arguments in the class as the function are in public therefore we can access them.
    s2.setData("Ryuk", 32, "A+", 6378583349, "Tony Stark");
    s3.setData("Virat" , 45, "A+", 7734329421, "Raj Mehta");
    s4.setData("Manveer", 25, "O+", 9876599453, "Arminder Singh");

    cout << "\n\n\n\t\t-------Student's Details--------\n\n\n";
    s1.displayData();//This will display details of the object s1
    s2.displayData();//This will display details of the object s2
    s3.displayData();//And so on...
    s4.displayData();

    return 0;
}

