#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
return a<b;
}
            
int main (){
vector <int> list{100,30,80};
sort(list.begin(), list.end(),compare);

for (auto &element:list)
{
cout << element<<endl;
}

return 0;
}