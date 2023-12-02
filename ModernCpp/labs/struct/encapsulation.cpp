#include <iostream>

struct Fruit
{
    public:

    //default constructor
    Fruit() : price_kg(0), mWeight(0)
    {
    }

    //Parameterized constructor : initializer list
   Fruit(std::uint16_t price, std::uint16_t weight) : price_kg(price), mWeight(weight)
    {
        //do something
    }

    void setPrice(std::uint16_t price)
    {
        price_kg = price;
    }

    void setWeight(std::uint16_t weight)
    {
        mWeight = weight;
    }

    std::uint16_t getTotalPrice()
    {
        return mWeight * price_kg;
    }

private:
    std::uint16_t price_kg;
    std::uint16_t mWeight;
    std::uint16_t total_price;

};

int main()
{
    Fruit orange(10, 10); 
    Fruit Apple;

    Apple.setPrice(7);
    Apple.setWeight(10);
    std::cout << "Apple Total price " << Apple.getTotalPrice() << std::endl;
    std::cout << "Total price " << orange.getTotalPrice();


    return 0;
}