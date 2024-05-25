//S11230686
//ZhiXian Chen
#include <iostream>
#include <string>
using namespace std;
int main(){
	//Consts for class rates and mat fee 
	const int rate1 = 20; 
	const int rate2 = 25;
	const int rate3 = 30;
	const int matfee = 5;
	//Minimum number of classes
	const int min_class = 1;
	//Variables declaration
	string user_id;
	int numofclass;
	int sum;//charges for each customer 
	int total_earning = 0;//total charges for multiple customers
	int counter = 0;//counter for number of customers
	int status;//Rate based on class type
	char decision;
	char type;// Class type
	char need;// Whether mat is needed
	bool continue_running;
	
	    // ----------------------------------------- Program Starts Here -------------------------------------------- //

	//Welcome message
	cout << "+-----------------------------------------------------+\n"
         << "|          Welcome to the Yoga Class Services.        |\n"
         << "+-----------------------------------------------------+\n\n";
	cout<<"Enter S to start or Q to exit:"<<endl;
	cin>>decision;

	while(cin.fail()||(decision!='S'&&decision!='s'&&decision!='Q'&&decision!='q')){
		if(cin.fail()){
		cin.clear();
		string dummy;
		cin>>dummy;
		}
		cout<<"Invalid input. Please try again: "<<endl;
		cin>>decision;
	}
	if(decision=='S'||decision=='s'){
		continue_running = true;
	}
	else{
		continue_running = false;
	}

	while(continue_running){
		counter++;
		cout<<"What is your class type? \n(B for Basic, I for Intermediate and A for Advanced)"<<endl;
		cin>>type;
		
		while(cin.fail()||(type != 'B' && type != 'b' && type!= 'I' && type != 'i' && type != 'A' && type != 'a')){
			if(cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
			}
			cout<<"Invalid input. Please try again: "<<endl;
			cin>>type;
		}
	// Set rate based on class type
		if(type == 'B'|| type == 'b'){
			status = rate1;
		}
		else if(type == 'I' || type == 'i'){
			status = rate2;
		}
		else{
			status = rate3;
		}
		
		cout<<"How many classes do you have?"<<endl;		
		cin>>numofclass;
		while(cin.fail()||numofclass < min_class){
			if(cin.fail()){
				cin.clear();
				string dummy;
				cin >> dummy;
			}
			cout<<"Invalid input. Please try again:"<<endl;
			cin>>numofclass;
		}
			sum = numofclass * status;
			
		cout<<"Do you need a mat?(Y/N)"<<endl;
		cin>>need;
		while(cin.fail() || (need != 'Y' && need != 'y' && need != 'N' && need != 'n')){
			if(cin.fail()){
				cin.clear();
				string dummy;
				cin>>dummy;
			}
			cout<<"Invalid input. Please try again:"<<endl;
			cin>>need;
		}
		// Add mat fee if needed
		if(need == 'Y' || need == 'y'){
			sum += matfee;
		}
		total_earning = total_earning + sum;//Total number of all customers' charges
		cout<<"Please enter your user id"<<endl;
		cin>>user_id;
		cout<<"Dear Customer "<<user_id<<", your total number of customers is "<<counter<<", your total charges will be $"<<total_earning<<"."<<endl;
		cout<<"Best Regards"<<endl<<endl;
		cout << "Enter R to restart or Q to exit"<<endl;
        cin >> decision;
        while(cin.fail() || (decision != 'R' && decision != 'r' && decision != 'Q' && decision !='q')){
        	if(cin.fail()){
        		cin.clear();
        		string dummy;
        		cin>>dummy;
			}
			cout<<"Invalid input. Please try again"<<endl;
			cin>>decision;
		}
        if(decision == 'R' || decision == 'r'){
        	continue_running = true;
		}
		else{
			continue_running = false;
		}
	}
	//exit message			
	cout << endl
         << "+----------------------------------------------------+" << endl
         << "|        Thank you for using Yoga Class Service      |" << endl
         << "+----------------------------------------------------+" << endl << endl
         << "Exiting..." << endl;
	return 0;
}
