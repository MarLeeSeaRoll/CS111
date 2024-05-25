/*
    
    Finding area of circle using functions
*/
#include <iostream>


using namespace std;

//function declaration and defintion

void greet(string person);

string joint_name(string f1name, string l1name){
	return(f1name + " "+ l1name);
}

	
int main()
{

    string fname;
    cout << "Your firstname pls ";
    cin >> fname;
   
    string lname;
    cout << "Your lastname pls ";
    cin >> lname;
    
    string name = joint_name(fname,lname);
    
    greet(name);
    
    return 0;
}

void greet(string person){
	if (person=="Covid 19" || person=="covid 19"){
		cout << "GoodByeeeee " <<person<<endl;	
	}
	else{
		cout << "Helloooooo " <<person<<endl;	
	}
}



