#include <iostream>
using namespace std;
int main(){
	double input = 0.0;
	int sentinel = -999;
	int posi_num = 0;
	int nega_num = 0;
	
	
	cout<< "Enter a value between -100.0 and 100.0 (press -999 quit): \n";
	cin >>input;
	
	while(input != sentinel){
		if(input >= -100 && input <= 100){
			if(input<0){
				nega_num++;
			}
			else{
				posi_num++;
			}
		cout<< "Enter a value between -100.0 and 100.0 (press -999 quit) \n";
		cin >>input;
		}
		else{
		cout<<"Invalid input. Enter a value between -100.0 and 100.0 (press -999 quit): \n";
		cin>>input;
		}

	
	}
		cout <<"Number of +:"<<posi_num<<endl;
		cout <<"Number of -:"<<nega_num<<endl;

	
	
	
	
	
	
	
	return 0;
}
