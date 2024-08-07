//Write a program to explain function overloading and overriding using inheritance.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks." << endl;
    }

    void makeSound(int volume) {
        if (volume == 1) {
            cout << "WOOF!" << endl;
        } else {
            cout << "woof" << endl;
        }
    }
};

int main() {
    Animal *myAnimal = new Animal();
    myAnimal->makeSound(); // The animal makes a sound.

    Dog *myDog = new Dog();
    myDog->makeSound(); // The dog barks.
    myDog->makeSound(1); // WOOF!

    delete myAnimal;
    delete myDog;
    return 0;
}
