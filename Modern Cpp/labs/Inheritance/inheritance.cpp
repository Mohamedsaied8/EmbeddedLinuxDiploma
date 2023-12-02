

class SerialComm 
{
 public:

   virtual void serialSend()=0; //pure virtual function
   virtual void serialRecv()=0; //pure virtual function

};

class I2C : public SerialComm
{
    
};
class SPI : public SerialComm
{

};
//ABSTRACT Class
class Base
{

 public:

   virtual void display()=0; //pure virtual function
};

class Derived : public Base
{

 public:
    void display()
    {
        std::cout << "display from Derived class" << std::endl;
    }
};
int main()
{

    Derived derived;
    Base *base = &derived;
    base->display();

    return 0;
}