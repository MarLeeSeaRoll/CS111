#include <iostream>
using namespace std;

void readinput(int arr[], int size)
{
    int data = 0;
    int cur_size = 0;
    cout << "Enter " << size << " values or input q to quit" << endl;
    while (cur_size<size)
    {
        if (cin>>data)
        {
            arr[cur_size] = data;
            cur_size++;
        }
        else if(cin.fail()){
            cin.clear();
            
        }
    }
    cin.clear();
    cin.ignore();
}

int find_max(int arr[], int size)
{
    int maxvalue = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (maxvalue < arr[i])
        {
            maxvalue = arr[i];
        }
    }
    return maxvalue;
}

int main()
{
    const int CAP = 10;
    int arr[CAP];
    readinput(arr, CAP);
    int highestvalue = find_max(arr, CAP);
    cout << highestvalue<< endl;
    return 0;
}