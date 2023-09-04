#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
     vector<int> v(5,0);

    for(int i = 0; i <5; i++)
    {
        v.push_back(i);
    }
    cout << "size: " << v.size() << " capacity: " << v.capacity();
   
    return 0;
}