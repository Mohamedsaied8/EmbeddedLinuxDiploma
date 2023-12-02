/*

* Class Component inherit class leaf composed in class called composite
* implementation of Compisite pattern

*/

#include <iostream>
#include <vector>

class Component 
{
 public:

    virtual std::string Operation()
    {
       return "apply operation\n";
    }

    virtual void add()
    {
       std::cout << " add " << Operation();
    }
    
    virtual void remove()
    {
       std::cout << " remove " << Operation();
    }
};

class Leaf : Component
{
    public:

    std::string Operation() override
    {
       return "apply Leaf operation\n";
    }
    
};

class Composite : public Component
{
    public:
    Composite(std::vector<Component> components) :mComponents(components)
    {

    }

    void add()
    {
        for(auto component : mComponents)
        {
            component.add();
        }
    }
    private:
    std::vector<Component> mComponents;
};

int main()
{
    return 0;
}