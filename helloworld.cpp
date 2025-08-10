#include <iostream>
using namespace std;

int main() {
    int wage;

    cin >> wage;

    cout << "Salary of Lisa is ";
    cout << wage * 40 * 52;
    cout << endl;

    cin >> wage;

    cout << "Salary of John is " << wage * 40 * 52 << endl;

    return 0;
}
