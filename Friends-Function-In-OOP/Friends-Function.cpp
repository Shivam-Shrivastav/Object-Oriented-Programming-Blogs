//C++ program to explain Friends Function in OOP


//Kindly checkout my code blog in "Pass and return object" before seeing this code blog


//Friends function are the function declare outside the class and make us eligigble to access
//the private and protected data of the class.
//Since friend function is not in the scope of class therefore cannot be access by thr other objects in the class.



#include<bits/stdc++.h>
using namespace std;

class ComplexNumber
{
    //Private parts of the class not accessible to function outside the class
    private:
        //Data Members
        float real;
        float imaginary;
    
    //Public parts of the class
    public:
        //Function Members

        //Declalaration syntax of a Friend Function
        //This friend function will add the two complex numbers.
        friend ComplexNumber addCompNUmByFriFunc(ComplexNumber o1, ComplexNumber o2);


        //Parameterized Constructor
        ComplexNumber(float r, float i)
        {
            real = r;
            imaginary = i;
        }
    

        //Function to display data
        void displayData()
        {
            cout << "Complex number is : " << real << " + " << imaginary << "i" << endl << endl;
        }
};

ComplexNumber addCompNUmByFriFunc(ComplexNumber o1, ComplexNumber o2)
{
    //o3 is third object of the complex number.
    //It is set as parameterized constructor
    ComplexNumber o3((o1.real + o2.real)/*Addition of real part of both object or complex number*/ , (o1.imaginary + o2.imaginary)/*Addition of imaginary part of both object or complex number*/);
    //Above we can see that with  the help of friend function we are able to access the private section of the class.
    return o3;
}

int main(int argc, char const *argv[])
{
    ComplexNumber c1(3.8, 4.2), c2(7.3,2.5);//Arguments given to parameterized constructor's object.
    c1.displayData();
    c2.displayData();

    //c3 is the third object of the class or the third complex number.
    ComplexNumber c3 = addCompNUmByFriFunc(c1, c2);

    cout << "After addition operation: \n";
    c3.displayData(); //Addition of both the above object.

    return 0;
}
