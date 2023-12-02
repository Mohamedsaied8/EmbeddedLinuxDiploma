#ifndef CONTROLLING_UNIONS_H
#define CONTROLLING_UNIONS_H

// Controlled Unions
// Reference: The C++ Programming Language (4th Edition), Bjarne Stroustrup

#include <string>

class Entry {
 public:
  Entry(){};
  Entry(std::string name, int num)
      : _name{name}, _type{Tag::number}, _number{num} {};
      
  Entry(std::string name, std::string str) : _name{name}, _type{Tag::text} {
    new (&_text) std::string{str};  
  };
  ~Entry();                        // non-default destructor
  Entry(const Entry&);             // copy constructor
  Entry& operator=(const Entry&);  // copy assignment constructor
  Entry(Entry&&);                  // move constructor
  Entry& operator=(Entry&&);       // move assignment constructor

  struct bad_entry {};  // used for exceptions

  int Number() const;
  void Number(int);

  std::string Text() const;
  void Text(const std::string&);

 private:
  std::string _name;
  enum class Tag { number, text };
  Tag _type;

  union {
    int _number;
    std::string _text;
  };
  
};

#endif