#include <map>
#include <string>
#include <iostream>

using namespace std;

void printProducts(map<string,int> products)
{
    for(auto [key,value] : products) //valid in C++17
    {
        cout << "key " << key << " value " << value << "\n";
    }

    for(auto product : products) //C++11
    {
    
        cout << "key " << product.first << " value " << product.second << "\n";
 
    }

    map<string, int>::iterator it;
    for(it = products.begin(); it != products.end(); ++it)
    {
       cout << "key " << it->first << " value " << it->second << "\n"; 
    }

}

int main()
{
    map<string,int> products;
    products.insert(make_pair("tomato",10));
    products.insert({"onion",3});
    products["cucumber"] = 6;
    cout<<products["tomato"]<<endl;

    printProducts(products);
    return 0;
}
