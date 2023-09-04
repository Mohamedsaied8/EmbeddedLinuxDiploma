
#include <iostream>
#include <string>
#include "controlledUnions.h"

int Entry::Number() const {
  std::cout << "Read number" << std::endl;
  if (_type != Tag::number) throw bad_entry{};
  return _number;   
};

std::string Entry::Text() const {
  std::cout << "Read text" << std::endl;
  if (_type != Tag::text) throw bad_entry{};
  return _text;  
};

void Entry::Number(int num) {
  std::cout << "Write number" << std::endl;
  if (_type == Tag::text) {
    _text.std::string::~string();  // explicitly destroy string //NOLINT
    _type = Tag::number;
  }
  _number = num;  
}

void Entry::Text(const std::string& str) {
  std::cout << "Write text" << std::endl;
  if (_type == Tag::text)
    _text = str;  
  else {
    new (&_text) std::string{str};  // placement new: explicitly construct string
    _type = Tag::text;
  }
}

Entry::Entry(const Entry& source) {
  std::cout << "copy constructor" << std::endl;
  _name = source._name;  // NOLINT
  _type = source._type;  // NOLINT


  if (source._type == Tag::text) {
    new (&_text) std::string{source._text};  // placement new //NOLINT
  } else {
    _number = source._number;  // NOLINT
  }
}

Entry& Entry::operator=(const Entry& source) {
  std::cout << "copy assignment operator" << std::endl;
  _name = source._name;
  if (_type == Tag::text && source._type == Tag::text) {
    _text = source._text;  // usual string assignment //NOLINT
    return *this;
  }

  if (_type == Tag::text) {
    _text.std::string::~string();  // explicit destroy //NOLINT
  }

  switch (source._type) {
    case Tag::number:
      _number = source._number;  // NOLINT
      break;

    case Tag::text:
      new (&_text) std::string{source._text};  // placement new //NOLINT
      _type = source._type;
  }
  return *this;
}

Entry::~Entry() {
  std::cout << "destructor" << std::endl;
  if (_type == Tag::text)
    _text.std::string::~string();  // explicit destroy //NOLINT
}

// TODO: Add move and move assignment constructors

union combinedData
{
  char data;
  int Numeric; //4byes
};

int main() {
  //combinedData cdata;
  
  Entry entry1{"Temperature", 40};
  Entry entry2{"Car Model", "BMW"};
  try
  {
  int number = entry1.Number();
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  entry2.Text();

  Entry entry3{entry1};
  entry3 = entry2;
}