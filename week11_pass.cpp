#include <iostream>
using namespace std;


int main(){
    string query;
    int position;
    const int CAPACITY=50;
    string name[CAPACITY]={"James", "John", "Robert", "Michael", "William",
        "David", "Richard", "Joseph", "Charles", "Thomas",
        "Christopher", "Daniel", "Matthew", "Anthony", "Mark",
        "Donald", "Steven", "Paul", "Andrew", "Joshua",
        "Kenneth", "Kevin", "Brian", "George", "Edward","Mary", "Patricia", "Jennifer", "Linda", "Elizabeth",
        "Barbara", "Susan", "Jessica", "Sarah", "Karen",
        "Nancy", "Lisa", "Margaret", "Betty", "Sandra",
        "Ashley", "Dorothy", "Kimberly", "Emily", "Donna",
        "Michelle", "Carol", "Amanda", "Melissa", "Deborah"};
        while(cin>>query){
            for(int position=0;position<CAPACITY;position++){
                if(query == name[CAPACITY]){
                    cout<<"The name is in database, it's the "<<position<<"th data in our database."<<endl;
                }
                else{
                    cout<<"We can't find this name in our database"<<endl;
                }
            }
        }
        return 0;
}