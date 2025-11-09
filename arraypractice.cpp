#include <iostream>
#include <array>
using namespace std;

int main() {
    int studentScores[10];


    studentScores[0] = 85;
    studentScores[1] = 90;
    studentScores[2] = 78;
    studentScores[3] = 92;
    studentScores[4] = 88;
    studentScores[5] = 76;
    studentScores[6] = 95;
    studentScores[7] = 89;
    studentScores[8] = 84;
    studentScores[9] = 91;

    cout << "Student scores: ";
    for (int i = 0; i < 10; ++i) {
        cout << studentScores[i] << " ";
    }

    return 0;
}