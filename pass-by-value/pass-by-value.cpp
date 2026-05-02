#include <iostream>

class Object {
  int data;

public:
  Object(int e) : data{e} {}

  Object(Object &o) { std::cout << "Copy constructor called \n"; }
};

void foo(Object o) { std::cout << "foo called\n"; }

int main() {
  Object o(11);
  foo(o);
}
