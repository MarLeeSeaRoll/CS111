#include <iostream>
using namespace std;
int main ()
{
    int year_of_birth;
    string status;
    const double curr_year = 2024;
    cout << "What's your birth year? \n";
	cin >> year_of_birth;
	cout <<"Enter your martial status S/M \n";
	cin >> status;
	int age = curr_year - year_of_birth; 
	if(status == "S"){
		if(age>=27 )
			cout<<"You are allowed to drink \n";
		else
			cout<<"YOu are NOt allowed to drink because you are single \n";
	} 
	if(status=="M"){
		if (age>=21)
			cout<<age<<"years old. You are allowed to drink \n";
		else
		    cout<<age<<"years old. You are not allowed to drink \n";
	}
    return 0;
}
