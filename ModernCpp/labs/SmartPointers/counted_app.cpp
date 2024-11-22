#include "counted_ptr.h"

int main()
{
    CountedPtr<int> counted(new int);
    *counted = 100;
    std::cout << "value " << *counted << "\n";
    auto ptr = Make_CountPtr<int>();

    return 0;
}