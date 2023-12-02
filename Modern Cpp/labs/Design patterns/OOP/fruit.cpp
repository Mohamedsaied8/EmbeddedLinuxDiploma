#include <iostream>

class Fruit
{  
    public:
  
    int calculateTotalPrice()
    {
        return price * weight;
    }

    void setPrice(int p)
    {
        price = p;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    int getPrice()
    {
        return price;
    }
    private:
        int price;
        int weight;
};

int main()
{
    Fruit orange;
    orange.setPrice(10);
    orange.setWeight(2);

    auto total = orange.calculateTotalPrice();
    std::cout << "show total price " << total << std::endl;

    return 0;
}