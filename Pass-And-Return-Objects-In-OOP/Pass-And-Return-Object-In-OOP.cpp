//C++ program to pass and return object in OOP

/*In this explanation we will understand how to pass and return an object of a class
    * Consider two complex numbers c1= 2+5i and c2= 7+4i.
    * We will make a class of complex number with data members as real and imaginary part of complex number.
    * Now we will make a parameterized constructor taking the real and imaginary numbers as arguments.
    * And make a diplay function to diplay complex number.
    * Now to explain pass and return object we will make an add function outside the class of data type complex number,
    * And pass two objects as arguments.
    * Later we will add the real and imaginary part of these objects and return as an object to the main function 
    * for further operation.
    * In this way we will understand the concept of pass and return objects in OOP.
*/

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

    return 0;
}
