#include <iostream>
using namespace std;

int main(){
const int CAPACITY=50;
string query;
string name[CAPACITY]={"James", "John", "Robert", "Michael", "William",
"David", "Richard", "Joseph", "Charles", "Thomas",
"Christopher", "Daniel", "Matthew", "Anthony", "Mark",
"Donald", "Steven", "Paul", "Andrew", "Joshua",
"Kenneth", "Kevin", "Brian", "George", "Edward","Mary", "Patricia", "Jennifer", "Linda", "Elizabeth",
"Barbara", "Susan", "Jessica", "Sarah", "Karen",
"Nancy", "Lisa", "Margaret", "Betty", "Sandra",
"Ashley", "Dorothy", "Kimberly", "Emily", "Donna",
"Michelle", "Carol", "Amanda", "Melissa", "Deborah"};
	cout<<"Enter a name, or press q to exit"<<endl;
    while(true){
        cin >> query;
        if(query == "q"){
            break;
        }

    bool found = false;
    for(int position=0; position<CAPACITY; position++){
    if(query == name[position])
        {
        cout<<"The name is in the database, it's the "<<position<<"th data in our database."<<endl;
        found = true;
        break;
        }
    }
    if(!found){
        cout<<"The name "<<query<<" doesn't exist."<<endl;
        }
        cout << "Enter a name to query or input q to exit" << endl;
    }       
        
    
    cout<<"Thank you for your using"<<endl;
    return 0;
}
