/*
Assignment : 

* Calculate takes  two parameters first is array/vector, second is a function which
* modifys the elements of the array:to be swapped with another array
* call std::sort for sorting array

*/

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>


void Calculate(std::vector<int>& list ,std::function<void (std::vector<int>&) > changeMe){
    changeMe(list);
    std::sort(list.begin(),list.end(),[](int num2,int num1)->bool{return num2 < num1;});

}

void editor(std::vector<int> & list){
    std::vector<int> m_List;
    for(auto element : list){
        int x;
        std::cout << "Enter num: ";
        std::cin >> x;
        m_List.push_back(x);
    }
    m_List.swap(list);
}

int main(){
    std::vector<int> arr{5,7,9,6,1,4};
    Calculate(arr,editor);
    for(auto element : arr){
        std::cout << element << "\n";
    }

}