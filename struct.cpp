#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter Full name: ";
    cin.get(b1.name, 50);
    cout << "Enter price: ";
    cin >> b1.age;
    cout << "Enter Pages: ";
    cin >> b1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << b1.name << endl;
    cout <<"Price: " << b1.price << endl;
    cout << "Pages: " << b1.pages;

    return 0;
}
