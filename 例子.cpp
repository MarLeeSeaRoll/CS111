#include <iostream>
#include <iomanip>
#include <cmath> // ���� pow ������ͷ�ļ�
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

    // ��˰������ǧ��λ�ָ���ʾ
    cout << "Your income tax: " << fixed << setprecision(2);
    cout.imbue(locale(""));
    cout << tax << endl;

    return 0;
}

