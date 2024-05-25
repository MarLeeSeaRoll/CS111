#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int CAP = 50;
    int arr[CAP];
    int temp = 0;
    int counter = 0;
    ifstream infile;
    infile.open("data.txt");
    if (infile.is_open())
    {
        while(infile>>temp){
            arr[counter] = temp;
            counter++;
        }
    infile.close();
    cout << "saved" << endl;
    for (int i = 0; i < counter;i++){
        cout << arr[i] <<" ";
        }
    }
        else
        {
            cout << "File open failed." << endl;
        }
    return 0;
}