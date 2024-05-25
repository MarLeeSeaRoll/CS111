//S11230686 ZhiXian Chen
//Assignment1 Section3
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	//Constants for different tax rates, income classes, and minimum wage
	const double tax_rate0 = 0.18;
	const double tax_rate1 = 0.20;
	const double tax_rate2 = 0.33;
	const double tax_rate3 = 0.34;
	const double tax_rate4 = 0.35;
	const double tax_rate5 = 0.36;
	const double tax_rate6 = 0.37;
	const double tax_rate7 = 0.38;
	const double tax_rate8 = 0.39;
	const double INCOME_0_30000 = 30000;
	const double INCOME_30001_50000 = 50000;
	const double INCOME_50001_270000 = 270000;
	const double INCOME_270001_300000 = 300000;
	const double INCOME_300001_350000 = 350000;
	const double INCOME_350001_400000 = 400000;
	const double INCOME_400001_450000 = 450000;
	const double INCOME_450001_500000 = 500000;
	const double INCOME_500001_1000000 = 1000000;
	const double INCOME_OVER_1000000 = 1000001;
	const int minWage = 0; 
	//Consts for birth year limit
	const int currentYear = 2024;
	const int max_year = 2025;
	const int min_year = 0;
	//Variables declaration
	string firstName, 
	surName, 
	employeeID,
	title,//For Mr/Ms/Mx 
	status;//Store user is resident or non-resident
	int yearOFbirth;
	int age;
	char residentalStatus;//Decide user's residential status
	char gender;
	char decision;
	double income;
	double tax;//Total number of tax
	bool continue_running;




	//Program start
	
	// Set all numeric output to 2 decimal places	 
	cout << fixed << setprecision(2);	

	cout << "+-------------------------------------------------+\n"
         << "|             Welcome to Tax Calculator.          |\n"
         << "+-------------------------------------------------+\n\n";
    

	cout<<"Enter S to start or Q to exit:"<<endl;
	cin>>decision;
	
	while(cin.fail()||(decision!='S' && decision != 's' && decision!='Q' && decision != 'q'))                
	{	
		if(cin.fail()){
		cin.clear();
		string error;
		cin>>error;
		}
		cout<<"Something went wrong, Please try again.\n";
		cout<<"Enter S to start or Q to exit: \n";
		cin>>decision;
	}
	
	// Set the continue_running flag based on user's decision
	if(decision=='S' || decision=='s'){
		continue_running = true;
	}
	else{
		continue_running = false;
	}
	//Main loop of the program 
	while(continue_running){	
		cout << "What's your first name?"<<endl;
		cin >> firstName;
		string fname;
		
		// Extract the first letter of the firstName using substr() function. 
		fname = firstName.substr(0,1);

		cout << "What's your surname?"<<endl;
		cin >> surName;
		cout<<"Please enter your Employee ID:"<<endl;
		cin>>employeeID;			
		cout << "Please tell us your gender(M/F/O):"<<endl;
		cin >> gender;

		while(cin.fail()|| (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f' && gender != 'O' && gender != 'o'))
		{					
			if(cin.fail()){
				cin.clear();
				string error;
				cin >> error;
			}
			cout << "Invalid input. Please enter your gender(M/F/O):"<<endl;
			cin >> gender;
			}

			//Set title based on gender
			if(gender=='M' || gender == 'm'){
				title = "Mr.";
			}
			else if(gender=='F' || gender == 'f'){
				title="Ms.";
			}
			else{
				title="Mx.";
			}
		
		cout << "When is your birth year?"<<endl;
		cin >> yearOFbirth;

		while( cin.fail() || (yearOFbirth > currentYear||yearOFbirth<min_year)) 
		{
			if(cin.fail())
			{
				cin.clear();
				string error;
				cin >> error;
			}
			cout<<"Invalid input. Please enter your year of birth:"<<endl;
			cin>>yearOFbirth;
			}
			

		age = currentYear - yearOFbirth;
				
		cout << "Please input your income."<<endl;	
		cin >> income;
 
		while(cin.fail()||income<minWage){
			if(cin.fail()){
				cin.clear();
				string error;
				cin >> error;
				}
				cout<<"Invalid input. Please enter your real income:"<<endl;
				cin>>income;
			}
	
		cout<<"Are you resident? (Y/N)"<<endl;
		cin>>residentalStatus;

		while(cin.fail() || (residentalStatus!= 'Y' &&residentalStatus != 'y' && residentalStatus != 'N' && residentalStatus != 'n')){                                                         
			if(cin.fail()){
				cin.clear();
				string error;
				cin >> error;
				}			
			cout<<"Invalid input. Please enter your resident status(Y/N):"<<endl;
			cin>>residentalStatus;
			}
			
		//Tax cauculation for resident
		if(residentalStatus=='Y' || residentalStatus == 'y'){
			status = "a resident";
			//Logic of tax calculation for resident 	
			if(income<=INCOME_0_30000){
				tax = minWage;
				}
			else if(income<=INCOME_30001_50000){
				tax = (income-INCOME_0_30000) * tax_rate0;
				}
			else if(income<=INCOME_50001_270000){
				tax = (INCOME_30001_50000-INCOME_0_30000) * tax_rate0 + 
				(income-INCOME_30001_50000)*tax_rate1;
				}
			else if(income<=INCOME_270001_300000){
				tax = (INCOME_30001_50000-INCOME_0_30000)*tax_rate0+ 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(income-INCOME_50001_270000)*tax_rate2;
				}
			else if(income<=INCOME_300001_350000){
				tax = (INCOME_30001_50000-INCOME_0_30000) * tax_rate0 +
				 (INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				 (INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				 (income-INCOME_270001_300000)*tax_rate3;
				}
			else if(income<=INCOME_350001_400000){
				tax = (INCOME_30001_50000-INCOME_0_30000) * tax_rate0 + 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(income-INCOME_300001_350000)*tax_rate4;
				}
			else if(income<=INCOME_400001_450000){
				tax = (INCOME_30001_50000-INCOME_0_30000)* tax_rate0 + 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(income-INCOME_350001_400000)*tax_rate5;
				}
			else if(income<=INCOME_450001_500000){
				tax = (INCOME_30001_50000-INCOME_0_30000)* tax_rate0 + 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(income-INCOME_400001_450000)*tax_rate6;				
				}
			else if(income<=INCOME_500001_1000000){
				tax = (INCOME_30001_50000-INCOME_0_30000)* tax_rate0 + 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(INCOME_450001_500000-INCOME_400001_450000)*tax_rate6+
				(income-INCOME_450001_500000)*tax_rate7;				
				}				
			else{
				tax = (INCOME_30001_50000-INCOME_0_30000)* tax_rate0 + 
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(INCOME_450001_500000-INCOME_400001_450000)*tax_rate6+
				(INCOME_500001_1000000-INCOME_450001_500000)*tax_rate7+
				(income-INCOME_500001_1000000)*tax_rate8;					
				}
			}
		
		//Tax calculation for non-resident
		else{
			status = "not a resident";
			
			//Logic of tax calculation for non-resident
			if(income<=INCOME_0_30000){
				tax = income*tax_rate1;
			}
			else if(income<=INCOME_30001_50000){
				tax = INCOME_0_30000*tax_rate1+
				(income-INCOME_0_30000) * tax_rate1;
				}
			else if(income<=INCOME_50001_270000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 + 
				(income-INCOME_30001_50000)*tax_rate1;
				}
			else if(income<=INCOME_270001_300000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(income-INCOME_50001_270000)*tax_rate2;
				}
			else if(income<=INCOME_300001_350000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				 (INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				 (income-INCOME_270001_300000)*tax_rate3;
				}
			else if(income<=INCOME_350001_400000){
				tax =INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(income-INCOME_300001_350000)*tax_rate4;
				}
			else if(income<=INCOME_400001_450000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(income-INCOME_350001_400000)*tax_rate5;
				}
			else if(income<=INCOME_450001_500000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(income-INCOME_400001_450000)*tax_rate6;				
				}
			else if(income<=INCOME_500001_1000000){
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(INCOME_450001_500000-INCOME_400001_450000)*tax_rate6+
				(income-INCOME_450001_500000)*tax_rate7;				
				}				
			else{
				tax = INCOME_0_30000*tax_rate1+
				(INCOME_30001_50000-INCOME_0_30000) * tax_rate1 +
				(INCOME_50001_270000-INCOME_30001_50000)*tax_rate1+
				(INCOME_270001_300000-INCOME_50001_270000)*tax_rate2+
				(INCOME_300001_350000-INCOME_270001_300000)*tax_rate3+
				(INCOME_350001_400000-INCOME_300001_350000)*tax_rate4+
				(INCOME_400001_450000-INCOME_350001_400000)*tax_rate5+
				(INCOME_450001_500000-INCOME_400001_450000)*tax_rate6+
				(INCOME_500001_1000000-INCOME_450001_500000)*tax_rate7+
				(income-INCOME_500001_1000000)*tax_rate8;
				}					
			}

		//Display result	
		cout<<"Dear "<<title<<" "<<fname<<". "<<surName<<"(Employee ID: "<<employeeID<<")"<<endl<<endl;
		cout<<"Your are "<<age<<" years old and "<<status
			<<" of Fiji. Based on your provided income of $"<<income
			<<", you are required to pay\nan income Tax of $"
			<<tax<<"."<<endl<<endl;
		cout<<"Best Regards"<<endl<<endl;


		cout<<"Enter R to restart or Q to exit:\n";
		cin >>decision;
		while(cin.fail()||(decision!='R'&&decision!='r'&&decision!='Q'&&decision!='q')){
			if(cin.fail()){
			cin.clear();
			string error;
			cin>>error;
			}
		cout<<"Invalid input, Please enter R or Q to exit:"<<endl;
		cin>>decision;
		}
		
		// Set the continue_running flag based on user's decision
		if(decision=='R' || decision=='r'){
			continue_running = true;
		}
		else{
			continue_running = false;
		}		 
	}
	cout << endl
         << "+----------------------------------------------------+" << endl
         << "|      Thank you for using the Tax Calculator        |" << endl
         << "+----------------------------------------------------+" << endl << endl
         << "Exiting..." << endl;	
    return 0;
}
