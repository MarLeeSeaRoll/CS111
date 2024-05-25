# include <iostream>

using namespace std;

int main()
{  
   	
	double sum = 0;
	int count = 0;
	double salary = 0;
	cout << "Enter salaries, -1 to finish: ";
	cin >> salary;
	while (salary != -1)
	{
		sum = sum + salary;
		count++;
		cin >> salary;
	}
	cout << "The average is: " << sum/count << endl;

   	return 0;
}

