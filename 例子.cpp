#include <iostream>
#include <iomanip>
#include <cmath> // 包含 pow 函数的头文件
using namespace std;

int main() {
    double income;
    const double BASIC_NON_RESIDENT_TAX_RATE = 0.20;
    const double TAX_RATE_BASIC_OVER_27000 = 0.33;
    const int BASE_INCOME_LEVEL = 27000;

    cout << "Enter your income: ";
    cin >> income;

    double tax;
    if (income <= BASE_INCOME_LEVEL) {
        tax = income * BASIC_NON_RESIDENT_TAX_RATE;
    } else {
        double excess = income - BASE_INCOME_LEVEL;
        tax = BASE_INCOME_LEVEL * BASIC_NON_RESIDENT_TAX_RATE + excess * TAX_RATE_BASIC_OVER_27000;
    }

    // 将税款结果以千分位分隔显示
    cout << "Your income tax: " << fixed << setprecision(2);
    cout.imbue(locale(""));
    cout << tax << endl;

    return 0;
}

