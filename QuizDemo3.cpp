# include <iostream>
using namespace std;

int number = 1;
void changenumber(int number){
	number = number + 2;
}

int main (){
	{
		cout << "A: Number: " << number <<endl;
		int number = 3;
		cout << "B: Number: " << number <<endl;
		changenumber(10);
		cout << "C: Number: " << number <<endl;
		{
			cout << "D: Number: " << number <<endl;
			int number=4;
			cout << "E: Number: " << number <<endl;
		}
		cout << "F: Number: " << number <<endl;
	}
	cout << "G: Number: " << number <<endl;
	return 0;
}
