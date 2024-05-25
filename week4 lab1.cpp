#include <iostream>
using namespace std;
int main(){
	const double PRICE = 10.5;
	const int Cent_100 = 100;
	const int Cent_100 = 100;
	const int Cent_100 = 100;
	
	double total_price = 0.0;
	int num_of_pizza = 0;
	int change_due_cents = 0;
	int note_10 = 0;
	
	double amt_paid = 0.0;
	double change_due =0.0;
	cout <<"\t\tHeader here";
	cout<<"\nEnter num of pizzas:";
	cin>>num_of_pizza;
	total_price = num_of_pizza * PRICE
	cout <<"\nThte total price: $"<<total_price;
	cout <<"\nEnter amt paid: $";
	cin >>atm_paid
	change_due = amt_paid - total_price;
	cout<<"\n The change due: $"<<change_due;
	change_due_cents = change_due *Cent_100 + 0.5;
	note_10 = change_due_cents / Cent_1000;
	change_due_cents = note_10 * Cent_1000;
	note_5 = change_due_cents / Cent_1000;
	

	return 0;
} 
