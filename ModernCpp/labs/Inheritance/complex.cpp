#include <iostream>

/*

Access      Same Class        Child       Outside

Public        true            true         true

Protected     true             true         False

Private        true            False        False

*/
class Complex
{
    public:
    Complex(float real = 0, float img=0) : mReal(real),mImg(img)
    {
    }

friend std::ostream& operator<<(std::ostream& output,Complex const& complex);


Complex& operator+(Complex  const &rhs)
{

    this->mReal = mReal + rhs.mReal;
    this->mImg = mImg + rhs.mImg;
    return *this;
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
std::ostream& operator<<(std::ostream& output, Complex const& complex)
{
    output << complex.mReal << "+i" << complex.mImg;
    return output;
}

int main()
{

    Complex c1(5,6);
    Complex c2(5,77);
    Complex c3(0,0);

    c3 = c2 + c1;
    std::cout << c3;

    return 0;
}