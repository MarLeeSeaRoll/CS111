#include <iostream>
using namespace std;
void double_up(int ary[], int size);
int main()
{
    const int CAPACITY = 100;
    int numbers[CAPACITY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int cur_size = 0;

    int data;
    cout << "\n Enter some numbers or Q to Quit\n";

    while (cin >> data)
    { // keep on accepting input while user enters some numbers
        if (cur_size < CAPACITY)
        {
            numbers[cur_size] = data;
            cur_size++;
        }
    }
    cin.clear(); // this is done to clear the console from the invalid input Q which was entered by the user to terminate this loop
    cin.ignore();

    // double each number in array
    double_up(numbers, cur_size);

    // print all data
    cout << "\n doubles squares of array elements\n";

    for (int i = 0; i < cur_size; i++)
    {
        cout << numbers[i] << "  ";
    }
    cout << endl;

    return 0;
}
void double_up(int ary[], int size)
{
    for (int i = 0; i < size; i++)
    {
        ary[i] = ary[i] * 2;
    }
}