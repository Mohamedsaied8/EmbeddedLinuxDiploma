#include <iostream> //cin , cout
namespace myStandard
{
    std::uint16_t variable;

}

double variable = 0.0;
using namespace std;
int main()
{
    myStandard::variable = 8;

    cout << "name space variable " << myStandard::variable
     << " global var " << variable <<  endl; 

    return 0;
}