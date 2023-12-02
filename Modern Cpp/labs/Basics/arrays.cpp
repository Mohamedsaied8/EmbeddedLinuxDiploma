#include <iostream>
#include <array>

namespace Array
{
  const int m_size=5;
  int c_arr[m_size];

  int size()
  {
    return  m_size;
  }

}

int main()
{
    int c_arr[5] =  {1, 2, 3, 4, 5};
    
    printf("address: %x \n", c_arr+1);
    std::array<int, 5> cpp_arr = {1, 2, 3, 4, 5};

    for(auto element : cpp_arr) //interview question what is the data type of element
    {
        if(element == 3 )
        {
             std::cout << "key is found " << element << std::endl;
        }
    }

    return 0;
}