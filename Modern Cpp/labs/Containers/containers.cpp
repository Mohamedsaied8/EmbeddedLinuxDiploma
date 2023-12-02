#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main() {

  // initialize a set of int type, doesn't allow duplication
  set<int> numbers = {1, 100, 10, 70, 100};
  multiset<int> multi_numbers = {1, 100, 10, 70, 100};
 
  //print the set
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  cout << endl;
  cout << "Numbers are: ";
  for(auto &num: multi_numbers) {
    cout << num << ", ";
  }
  cout << endl;

 // initialize an unordered_set of int type
  multiset<int> numbers_allow_duplicate;

  numbers_allow_duplicate.insert(70);
  numbers_allow_duplicate.insert(88);
  numbers_allow_duplicate.insert(70);
  // print the unordered_set
  cout << "numbers_allow_duplicate are: ";
  for(auto &num: numbers_allow_duplicate) {
    cout << num << ", ";
  }

  return 0;
}