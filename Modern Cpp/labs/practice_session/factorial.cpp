#include <iostream>

int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main()
{
    int x = 5;
    int *p = &x;
    printf("address of x = %x \n", &x);
    printf("address of p = %x \n", &p);
    printf("address of x = %x \n", *p); //dereference = 5


    //std::cout << "result: " << Factorial(-3);

    return 0;
}