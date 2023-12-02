#include <vector>
#include <iostream>
using namespace std;
int main (){
vector <int> vect_name(5);
int var=0;
for (auto &element:vect_name)
{
cin >> element;
}
for (auto &element:vect_name)
{
cout << element;
}

return 0;
}