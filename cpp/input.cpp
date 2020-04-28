#include <iostream>

using namespace std;

int main()
{

    char name[20];
    int age;
    char address[25];


    /*
     * Read the data
     */

    cout << "Enter the name.\n";
    cin >> name;

    cout << "Enter age.\n";
    cin >> age;

    cout << "Enter address.\n";
    cin >> address;

    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Address: "<< address << "\n";

    return 0;    
}