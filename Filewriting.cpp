#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream outfile;//ofstream: output stream.
    outfile.open("info.txt");
    if(outfile.is_open()){
        cout << "File successfully opened." << endl;
        outfile << "My name is spongebob" << endl;
        outfile.close();
        cout << "File writing successfully";
    }
    else{
        cout << "Unable to open file." << endl;
    }
    return 0;
}