#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream infile;
    infile.open("info.txt");
    if(infile.is_open()){
        string line;
        while(getline(infile,line)){
            cout << line << endl;
        }
        infile.close();
        cout << "File reading successfully" << endl;
    }
    else{
        cout << "Unable to open file" << endl;  
    }
    return 0;
}