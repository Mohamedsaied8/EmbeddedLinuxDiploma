#include <iostream>

#define M_KM    1.6 // macro

using namespace std;

constexpr float MILE_TO_KM = 1.6; 

bool CONDITION = true;
int main()
{

    uint16_t inputMiles = 0; 
    uint8_t index = 0;
    while(CONDITION)
    {
        cout << "Enter Input miles" << endl;
        cin >> inputMiles;
        double outputKilometers =  inputMiles * MILE_TO_KM;
        cout << outputKilometers << " Kilometers" << endl;
        index++;
    }


    return 0;
}
