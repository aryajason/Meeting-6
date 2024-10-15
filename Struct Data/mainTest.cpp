#include <iostream>
#include <cmath>
using namespace std;

struct StudentData {
    string NIM;
    float UTS;
    float UAS;
    float avg;
};

StudentData NumberStudent[50];

int main() 
{
    NumberStudent[0].NIM = "22780/PA";
    NumberStudent[0].UTS = 90;
    NumberStudent[0].UAS = 83;

    NumberStudent[0].avg = (NumberStudent[0].UTS + NumberStudent[0].UAS) / 2;

    string expectedNIM = "22780/PA";
    float expectedAvg = (90 + 83) / 2;

   const float EPSILON = 0.001;

    // Check if the test passes
    if (expectedNIM == NumberStudent[0].NIM && abs(expectedAvg - NumberStudent[0].avg) < EPSILON) {
        cout << "Test Passed: SUCCESSFUL" << '\n';
    } else {
        cout << "Test Failed!" << '\n';
    }

    return 0;
}
