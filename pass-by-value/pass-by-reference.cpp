#include <iostream>

/*
 *  You can see from the output of the program that no copy constructor
 *  is called. This happens because foo takes o by reference and not
 *  by value.
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

void foo(Object &o) { std::cout << "foo called\n"; }

int main() {
  Object o{11};
  foo(o);
}
