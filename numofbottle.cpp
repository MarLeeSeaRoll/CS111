#include <iostream>
using namespace std;
int main()
{
	int no_of_bottles;
	const int vol_of_bottle = 500;
	cout << "Enter number of bottles." <<endl;
	cin >> no_of_bottles;
	int total_vol = no_of_bottles*vol_of_bottle;
	cout <<"Total volume  =" <<total_vol;
	return 0;
	
}
