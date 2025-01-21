#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter your marks: " << endl;
    cin >> x;

    if (x >= 90) {
        cout << "Grade is A" << endl;
    } else if (x > 80) {
        cout << "Grade is B" << endl;
    } else if (x > 70) {
        cout << "Grade is C" << endl;
    } else {
        cout << "Grade is D" << endl;  // Added for marks <= 70
    }

    return 0;
}
