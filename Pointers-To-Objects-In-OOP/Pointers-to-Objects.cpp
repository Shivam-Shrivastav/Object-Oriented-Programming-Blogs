//C++ program to explain pointers to object in OOP


//Before Checkingout this blog visit the blog name Pass-and-return-object-in-OOP

//Pointers to object are the pointers of data type of the class 
//Example : Here we have cpmplex number as our class therefore the datatype of our pointer to object will be complex number
//We can access function of the class using this pointer to object.
//Checkout in Main function.



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

        //Parameterized Constructor
        ComplexNumber(float r, float i)
        {
            real = r;
            imaginary = i;
        }

        //function to return real part of the complex number object
        float getRealPart()
        {
            return real;
        }

        //function to return imaginary part of the complex number object
        float getImaginaryPart()
        {
            return imaginary;
        }

        //Function to display data
        void displayData()
        {
            cout << "Complex number is : " << real << " + " << imaginary << "i" << endl << endl;
        }
};
//Add function of return type ComplexNumber takes two object of the above class as arguments
ComplexNumber addFunction(ComplexNumber n1, ComplexNumber n2)//Objects of the class as arguments
{
    float r;
    float i;

    r = n1.getRealPart() + n2.getRealPart();//Real part of both the complex number object is added an save as r.
    i = n1.getImaginaryPart() + n2.getImaginaryPart();//Imaginary part of both the complex number object is added an save as i.

    ComplexNumber temp(r,i);//This r and i is set as argument to the parameterized constructor's object named temp.

    return temp;//This object named temp is returned 
}
int main(int argc, char const *argv[])
{
    ComplexNumber c1(3.8, 4.2), c2(7.3,2.5);//Arguments given to parameterized constructor's object.
    c1.displayData();
    c2.displayData();

    //Return of addition of two objects or complex numbers as a datatype ComplexNUmber named variable temp.
    ComplexNumber c3 = addFunction(c1, c2); 

    cout << "After addition operation on c1 and c2 : " << endl;
    c3.displayData();//display the object which is the addition of above two objects.



    //Pointer to object c1
    ComplexNumber *ptr;

    ptr = &c1;//Giving the address of c1 to the pointer


    //Accessing the function member of the class using pointer.

    cout << "Accessing the function member of the class using pointer:\n\n";
    cout << ptr->getImaginaryPart() << endl;
    cout<<ptr->getRealPart()<<endl;
    ptr->displayData();

    return 0;
}
