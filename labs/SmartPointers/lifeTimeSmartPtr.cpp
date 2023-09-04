// lifetimeSemantic.cpp

#include <iostream>
#include <memory>

void asSmartPointerGood(std::shared_ptr<int> shr)
{
  std::cout << "shr.use_count(): " << shr.use_count() << std::endl;  // (3)
  shr.reset(new int(2011));                                          // (5)
  std::cout << "shr.use_count(): " << shr.use_count() << std::endl;  // (4)
}

void asSmartPointerBad(std::shared_ptr<int>& shr){
  // doSomethingWith(*shr);
  *shr += 19;
}

int main(){
  
  std::cout << std::endl;
  int value = 1998;
  std::shared_ptr<int> firSha(new int(value));

  auto firSha = std::make_shared<int>(1998);
  auto secSha = firSha; //copy constructor

  std::cout << "firSha.use_count(): " << firSha.use_count() << std::endl;  // (1)
  std::cout << "secSha.use_count(): " << secSha.use_count() << std::endl;  //

  std::cout << std::endl;
  
  asSmartPointerGood(firSha);                                              // (2)
  
  std::cout << std::endl;
  
  std::cout << "*firSha: " << *firSha << std::endl;
  std::cout << "firSha.use_count(): " << firSha.use_count() << std::endl;
  
  std::cout << std::endl;
  
  std::cout << "*secSha: " << *secSha << std::endl;
  std::cout << "secSha.use_count(): " << secSha.use_count() << std::endl;
  
  std::cout << std::endl;
  
  asSmartPointerBad(secSha);                                              // (6)
  std::cout << "*secSha: " << *secSha << std::endl;
  
  std::cout << std::endl;
  
}