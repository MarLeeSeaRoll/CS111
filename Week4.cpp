#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double mark;
    cout << "Please enter your mark: ";
    cin >> mark;
    if (mark > 100){
    cout << "Invalid mark" << endl;
    }
else if (mark >= 85){
    cout << "Your grade is A+" << endl;
    }
    else if (mark >= 77) {
    cout << "Your grade is A" << endl;
    }
else if (mark >= 70) {
	cout << "Your grade is B+" << endl;
    }
    else if (mark >= 63) {
    cout << "Your grade is B" << endl;
    }
    else if (mark >= 57) {
    cout << "Your grade is C+" << endl;
    }
    else if (mark >= 49) {
    cout << "Your grade is C" << endl;
    }
    else if (mark >= 39) {
    cout << "Your grade is D" << endl;
    }
    else if (mark >= 0) {    
    cout << "Your grade is E" << endl;
    }
    return 0;
}
