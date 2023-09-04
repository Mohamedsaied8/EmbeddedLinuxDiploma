#include <iostream>
 
/*

Access      Same Class        Child       Outside

Public        True            True         True

Protected     True            True         False

Private       true            False        False

*/

class Complex
{

public:
   Complex(float real=0, float img=0) : mReal(real),mImg(img)
    {
    }

friend std::ostream& operator<<(std::ostream& output,const Complex &complex);

//return operator+()
// complex c3 = c1.operator+(c2) 
// c3 = c1 + c2;
Complex& operator+(Complex  const &rhs)
{
    this->mReal = this->mReal + rhs.mReal;
    this->mImg = this->mImg + rhs.mImg;
    return *this;
}

void setReal(float rl)
{
    this->mReal = rl;
}
float getReal()
{
    return this->mReal;
}

// copy assignment operator
/*Complex& operator=(Complex &rhs)
{

    this->mReal = rhs.mReal;
    this->mImg = rhs.mImg;
    return *this;
}*/
private:
    float mReal;
    float mImg;

};

//return       operator << (inputs)
//overloading for insertor operator
std::ostream& operator<<(std::ostream& output,const Complex &complex)
{
    output << "ostream : " << complex.mReal << "+i" << complex.mImg;
    return output;
}

int main()
{
    //default constructor
    Complex cd;
    
    Complex c1(5,6);
    Complex c2(5,77);
    Complex c3(0,0);
    c3 = c1 + c2;
   // c3 = c1.operator+(c2);
    std::cout << c3;

    return 0;
}