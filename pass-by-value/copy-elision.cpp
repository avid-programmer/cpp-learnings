#include <iostream>

/*
 *  You can see from the output of the program that no copy constructor
 *  is called. This happens because of feature of C++ called copy
 *  elision.
 *
 *  Instead of creating a temporary and copying it, the compiler creates
 *  it directly in the memory space of foo's parameter o.
 *
 */

class Object {
  int data;

public:
  Object(int e) : data{e} {}

  Object(const Object &o) : data{o.data} {
    std::cout << "Copy constructor called \n";
  }
};

void foo(Object o) { std::cout << "foo called\n"; }

int main() { foo(Object{12}); }
