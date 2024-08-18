#include <iostream>
using namespace std;


int main() {

    // pointers = variable that stores a memory address of another variable
    // sometimes it's easier to work with an address

    // '&' address-of operator
    // '*' dereference operator

    string name = "Bro";
    int age = 21;

    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *pFreePizzas << endl;
    cout << *(pFreePizzas + 0) << endl;
    cout << *(pFreePizzas + 1) << endl;
    cout << *(pFreePizzas + 4) << endl;

    return 0;


}