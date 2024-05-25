#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    string name[3]={"Tom","Mere","Sarah"};
    double marks[3]={100,90,95};

    ofstream writefile;
    writefile.open("exam-results.txt");
    writefile << "+------+------+" << endl;
    writefile <<"|"<<left<<setw(6)<<"Name"<<setw(6)<< "Score|"<<endl;
    for (int i = 0; i < 3;i++){
        writefile << "|"<<left<<setw(6)<< name[i] << setw(6) << marks[i]<<"|"<< endl;
    }
    writefile << "+-- -- --+-- -- --+" << endl;
    writefile.close();

    ifstream readfile;
    readfile.open("exam-results.txt");
    string table;
    while(getline(readfile,table)){
        cout << table << endl;
    }
    return 0;
}