#include <iostream>

void accel_read(int &raw_x, int &raw_y, int &raw_z)
{
    raw_x = 10;
    raw_y = 12;
    raw_z = 0;
}

void convert_to_angle(int &roll, int &pitch, int &yaw)
{
    roll = 0;
    pitch = 1;
    yaw = 90;
}
int main()
{
    int x=0,y=0,z=0;
    accel_read(x,y,z);
    std::cout << "x: "<< x <<" y: "<< y << "z: "<< z <<std::endl;
    convert_to_angle(x,y,z);
    std::cout << "x: "<< x <<" y: "<< y << "z: "<< z <<std::endl;

    return 0;
}