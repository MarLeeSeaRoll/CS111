#include <iostream>
#include <fstream>
using namespace std;

double process_array(int arr[], int size);
int main()
{
    const int CAP = 50;
    int arr[CAP];
    int temp = 0;
    int counter = 0;
    int average = 0;
    int sum = 0;
    ifstream infile;
    infile.open("data.txt");
    if (infile.is_open())
    {
        while (infile >> temp)
        {
            arr[counter] = temp;
            counter++;
        }
        infile.close();
        cout << "saved" << endl;
        for (int i = 0; i < counter; i++)
        {
            cout << arr[i] << " " << endl;
        }
        /*for (int i = 0; i < counter;i++){
            sum += arr[i];
        }
        average = sum / counter;*/
        average = process_array(arr, counter);
        cout << average << endl;
    }
    else
    {
        cout << "File open failed." << endl;
    }
    return 0;
}
double process_array(int arr[], int size)
{
    double sum = 0;
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    average = sum / size;
    return average;
}