#include <iostream>

/*
 *  This is similar to pass-by-value.cpp output.
 *
 *  Now, foo instead of having one argument, it has 2 arguments.
 *  So, copy constructor of both the arguments is called.
 */

class Object {
  int data;

public:
  Object(int e) : data{e} {}

  Object(const Object &o) : data{o.data} {
    std::cout << "Object's copy constructor called \n";
  }
};

class Container {
  int data;

public:
  Container(int e) : data{e} {}

  Container(const Container &o) : data{o.data} {
    std::cout << "Container's copy constructor called \n";
  }
};

void foo(Object o, Container c) { std::cout << "foo called\n"; }

int main() {
  Object o{11};
  Container c{12};
  foo(o, c);
}
