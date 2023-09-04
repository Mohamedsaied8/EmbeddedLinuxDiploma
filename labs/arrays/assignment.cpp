/*
We are given an array of integer elements which contains duplicate values
 and the task is to calculate the frequencies of the distinct elements 
present in an array and print the result.

a { 3,3,5,8,9,8,9,10,17,10,11,17,10}

element : frequency
3 : 2
5 : 2
8 : 2
9 : 2
10 : 3
11 : 1
17 : 1

*/
#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

int main ()
{
    constexpr int size = 13 ;
    int num{0} , frq{0},search_num{0},count{0};
    std::array<int,size> arr_list = {3,3,5,8,9,8,9,10,17,10,11,17,10};
    std::array<int,size>::iterator ptr;
    std::array<int,12> check;
    check.fill(0);

    for(int index = 0 ; index < size;index++)
    {

        // to make the array of unique elements
       if(check[index] == 1)  continue ;
       else 
       {
          check[index] = 1 ;
          frq = 1;
       }

        for(int index2 = index+1 ; index2 <size ;index2++)
        {
            if(arr_list[index] == arr_list[index2])
               {
                check[index2] = 1 ;
                 frq++;
               }
        }
        std::cout << "the number: "<< arr_list[index] << " \t repeated: "<<frq<<std::endl;
        frq = 0;
    }
    
    
return 0;
}