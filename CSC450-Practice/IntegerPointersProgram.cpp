#include <iostream>
using namespace std;

int main() {

    int one, two, three;

    int *pOne = new int;
    int *pTwo = new int;
    int *pThree = new int;

    cout << "Enter thre integer values: " << endl;
    cin >> one >> two >> three;

    *pOne = one;
    *pTwo = two;
    *pThree = three;

    cout << "Your first number: " << *pOne << endl;
    cout << "Your second number: " << *pTwo << endl;
    cout << "Your third number: " << *pThree << endl;

    cout << one << ", " << two << ", " << three << endl;
    cout << *pOne << ", " << *pTwo << ", " << *pThree << endl;
    cout << pOne << ", " << pTwo << ", " << pThree << endl;
    cout << &one << ", " << &two << ", " << &three << endl;

    delete pOne;
    delete pTwo;
    delete pThree;

    return 0;

}