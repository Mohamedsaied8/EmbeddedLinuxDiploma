#include <iostream>


class Complex
{

    public:
    Complex(float r=0, float i=0) : real(r), img(i)
    {

    }

    Complex& operator=(const Complex& obj)
    {
        this->real = obj.real;
        this->img = obj.img;
        return *this;
    }

    Complex operator+(const Complex& obj)
    {
        Complex result;
        result.real = this->real + obj.real;
        result.img = this->img + obj.img;
        return result;
    }

    friend std::ostream& operator<<(std::ostream& out, Complex& obj);

    private:
    float real;
    float img;
};

// overloading stream operator
std::ostream& operator<<(std::ostream& out, Complex& obj)
{
    out << " real: " << obj.real << " + "<< obj.img << "i\n";
    return out;
}

int main()
{

    Complex C1(1.2, 6.0);
    Complex C2(1.2, 6.0);

    auto C3 = C1 + C2;
    
    C3 = C2 + C3;
    C1 = C3;
    auto C4 = C1.operator+(C2);

    std::cout << "complex 3 " << C3;
    return 0;
}