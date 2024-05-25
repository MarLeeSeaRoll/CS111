#include <iostream>
using namespace std;
int main(){
	
	
	double speed = 0.0;
	double fine = 0.0;
	char drunk_status;
	const int over_speed = 70;
	const int SIXTY = 60;
	const int SEVENTY = 70;
	const int five_dollars = 5;	
	const int seven_dollars = 7;
	const int fifteen_dollars = 15;
	cout <<"ENter speed:";
	cin >> speed;
	
	cout <<"enter driver drunk status(y/n)";
	cin >> drunk_status;
	
	cout<<"drive speed "<<speed<<endl;
	cout<<"driver status: "<<drunk_status<<endl;
	
	if(speed > 60 && speed < 65 && drunk_status == 'n'){
		cout <<"warning.\n";
	}
	else if(speed > 60 && speed< 65 && drunk_status == 'y'){
		cout <<"warning + tell to take a shower.\n";
	}
	else if(speed >= 65 && speed <= 70 && drunk_status == 'n')
	{
		cout <<"$5 fine for each km/hr over 60 km/hr."<<endl;
		fine =(speed - SIXTY)* five_dollars;
		cout <<"Fine =$ "<<fine<<endl;
		}
	else if(speed >= 65 && speed <= 70 && drunk_status == 'y')
	{
		cout <<"$7 fine for each km/hr over 60 km/hr + tell to take a shower"<<endl;
		fine =(speed - SIXTY)* seven_dollars;
		cout <<"Fine =$ "<<fine<<endl;
	}
	else if(speed >70 && drunk_status == 'n'){
		cout <<"$5 fine for each km/hr over 60 km/hr up to and including 70 km/hr, $15 fine for each km/hr over 70 km/hr"<<endl;
		fine =(over_speed - SIXTY)* five_dollars + (speed - SEVENTY) * fifteen_dollars;
		cout <<"Fine =$ "<<fine<<endl;
	}
	else if(speed >70 && drunk_status == 'y'){
		cout <<"$7 fine for each km/hr over 60km/hr upto and including 70 km/hr, $15 fine for each km/hr over 70 km/hr, Spend the day/night in prison in cell."<<endl;
		fine =(over_speed - SIXTY)* seven_dollars + (speed - SEVENTY) * fifteen_dollars;
		cout <<"Fine =$ "<<fine<<endl;
	}
	else{
		cout<<"Invalid input."<<endl;
	}
return 0;
}
