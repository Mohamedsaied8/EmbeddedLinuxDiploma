/*
Description: Convert Distance in Miles to Distance in Kms
    Input: Distance in miles
    Formula: 1M = 1.6 Km
    Output: Distance in Kms

*/
#include <iostream>
#define PI 3.14 //preprocessing
using namespace std;

int main()
{
    constexpr float PI_ = 3.14; //compile time 

    const float KM_PER_MILE = 1.6;

    float inputMiles; 

    cin >> inputMiles;

    float distanceKm = inputMiles * KM_PER_MILE;
    cout << endl << "Output Kilometers: " << distanceKm;

    return 0;
}