#include <iostream>
#include <array>
void swap(float &r1 , float &r2)
{
    float temp = r1;
    r1 = r2;
    r2 = temp;
}
int main()
{
    std::array<float, 3> nums = { 1.1, 5.2 , 6.3};
    std::array<float, 3> f_nums = { 0, 0 , 0};
    //std::array<float, 3> &r_nums = nums;
    nums.swap(f_nums);

    for(int i = 0; i<nums.size(); i++)
    {
        //swap(nums[i], f_nums[i]);
        std::cout <<"value of nums["<<i <<"]" << nums[i] << " value of f_num["<<i <<"]" << f_nums[i] <<
         std::endl;
    }

    int x = 0;
    int y = ++x; //prefix : x = 1 y = 1
    int z = y++; // z = 1, y = 2
    std::cout << "value of z = " << z << "value of y " << y << std::endl;

    int w = x == 1? y : z; //ternary operator
    std::cout << "value of w " << w << std::endl;
  
  
 
    return 0;
}