
//Lecture task

#include <iostream>

using namespace std;

int main (){
	
	double mark = 0;
	bool sentinel = true;

	while (sentinel == true){		
		bool correct_entry = true;
		cout << "\n\nEnter your mark (between 0-100 inclusive):";
		string dummy;
		cin >> mark;
		
		if (mark<0 || mark >100)
		{
			cout << "\nError: The marks entered must be between 0 and 100 inclusive" << endl;
			correct_entry = false;
			//return 1;
		}
			
		if (cin.fail())
		{
			correct_entry = false;
	        cin.clear();
	        cin>> dummy;
	        if (dummy=="Q")
	        	sentinel = false;
	        else
	        	cout << "\nError: Input was not a number!!" << endl;
			//return 1;
		}
		
		if (correct_entry == true){
		
		
			if (85<=mark && mark <=100)
			{
				cout << "\nThe grade is A+";
					
			}	
			else if (78<=mark && mark<85)
			{
				cout << "\nThe grade is A";
			}
			else if (71<=mark && mark <78)
			{
				cout << "\nThe grade is B+";
			}
			else if (64<=mark && mark <71)
			{
				cout << "\nThe grade is B";
			}
			else if (57<=mark && mark <64)
			{
				cout << "\nThe grade is C+";
			}
			else if (50<=mark && mark <57)
			{
				cout << "\nThe grade is C";
			}
			else if (40<=mark && mark <50)
			{
				cout << "\nThe grade is D";
			}		
			else
			{
				cout << "\nThe grade is E";
			}	
		}
			
			
	}
	return 0;
	
		
}
