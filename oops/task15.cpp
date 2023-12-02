#include <iostream>
using namespace std;

class Animal {
public:
  virtual void eat() {
    cout << "Animal is eating" << endl;
  }
};

class Dog : public Animal {
public:
  void eat() override {
    cout << "Dog is eating" << endl;
  }
};

class Cat : public Animal {
public:
  void eat() override {
    cout << "Cat is eating" << endl;
  }
};

int main() {
  Animal* animal = new Dog();
  animal->eat();

  animal = new Cat();
  animal->eat();

  return 0;
}