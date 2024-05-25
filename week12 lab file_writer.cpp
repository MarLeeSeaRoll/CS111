#include <iostream>
#include <fstream>
using namespace std;

 int main(){
     int n = 100;
     ofstream outfile;
     outfile.open("data.txt");
    if(outfile.is_open()){
        cout << "File opened successfully." << endl;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                outfile << i <<" ";
            }
        }
        outfile.close();
    }
    else{
        cout << "File open failed." << endl;
    }
    return 0;
 }