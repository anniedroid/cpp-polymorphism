#include <iostream>
using namespace std;

class Animal
{
public:
    string species;
    void intro()
    {
        cout << "This is an animal\n";
    }
    void intro(string type)
    {
        cout << "This is a " << type << "!\n";
    }
    virtual void sound()
    {
        cout << "The animals have their own sound!\n";
    }
};

class Cat : public Animal
{
public:
    Cat(string type)
    {
        species = type;
    }

    void sound()
    {
        cout << "Meow meow!\n";
    }
};

class Cow : public Animal
{
public:
    Cow(string type)
    {
        species = type;
    }
    void sound()
    {
        cout << "Moo moo!\n";
    }
};

int main()
{
    Animal my_pet;
    my_pet.intro();
    my_pet.sound();

    Cat my_cat("cat");
    Cow my_cow("cow");

    my_cat.intro();
    my_cat.intro(my_cat.species);
    my_cat.sound();

    my_cow.intro();
    my_cow.intro(my_cow.species);
    my_cow.sound();

    Animal* my_pet_ptr = &my_pet;
    my_pet_ptr->sound();
    my_pet_ptr->intro();
    my_pet_ptr->intro(my_cat.species);

    my_pet_ptr = &my_cow;
    my_pet_ptr->sound();

    return 0;
}

