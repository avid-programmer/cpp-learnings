#include <iostream>

/*
 * You can see that when passing argument to a function by value,
 * a local copy of the Object is created, so that function foo can
 * use it without affecting the original object which was passed.
 * To create this copy, it invokes the custom copy constructor of
 * class Object.
 *
 * I have created a dummy class Object and provided a custom copy
 * constructor so that you can see whenever it is called.
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

int main() {
  Object o(11);
  foo(o);
}
