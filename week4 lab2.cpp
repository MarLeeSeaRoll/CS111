#include <iostream>
using namespace std;
int main(){
	const double PRICE = 10.5;
	double total_price = 0.0, amt_paid = 0.0, change_due = 0.0;
	int num_of_pizza = 0;
	int change_due_cents = 0;
	const int Cent_1000 = 1000;
	const int Cent_500 = 500;
	const int Cent_200 = 200;
	const int Cent_100 = 100;
	const int Cent_50 = 50;
	const int Cent_20 = 20;
	const int Cent_10 = 10;
	const int Cent_5 = 5;
	int note_10 = 0;
	int note_5=0;
	int note_2=0;
	int note_1=0;
	int cent_50=0;
	int cent_20=0;
	int cent_10=0;
	int cent_5=0;

	cout <<"\t\tHeader here";
	cout<<"\nEnter num of pizzas:";
	cin>>num_of_pizza;
	total_price = num_of_pizza * PRICE;
	cout <<"\nThte total price: $"<<total_price;
	cout <<"\nEnter amount paid: $";
	cin >>amt_paid;
	change_due = amt_paid - total_price;
	if(change_due<0){
		cout << "Insufficient amount paid. Please provide more than the total purchase price." << endl;
        return 1;
	}
	cout<<"\n The change due: $"<<change_due;
	change_due_cents = change_due * Cent_100 + 0.5;
	note_10 = change_due_cents / Cent_1000;
	change_due_cents = change_due_cents-note_10 * Cent_1000;
	note_5 = change_due_cents / Cent_500;
	change_due_cents = change_due_cents-note_5 * Cent_500;
	note_2 = change_due_cents / Cent_200;
	change_due_cents = change_due_cents-note_2 * Cent_200;
	note_1 = change_due_cents / Cent_100;
	change_due_cents = change_due_cents-note_1 * Cent_100;
	cent_50 = change_due_cents / Cent_50;
	change_due_cents = change_due_cents-cent_50 * Cent_50;
	cent_20 = change_due_cents / Cent_20;
	change_due_cents = change_due_cents-cent_20 * Cent_20;
	cent_10 = change_due_cents / Cent_10;
	change_due_cents = change_due_cents-cent_10 * Cent_10;
	cent_5 = change_due_cents / Cent_5;
	cout <<"\n Change break down: "<<endl;
	cout<<note_10<<"$10 notes"<<endl;
	cout<<note_5<<"$5 notes"<<endl;
	cout<<note_2<<"$2 notes"<<endl;
	cout<<note_1<<"$1 notes"<<endl;
	cout<<cent_50<<"$50 cents"<<endl;
	cout<<cent_20<<"$20 cents"<<endl;
	cout<<cent_10<<"$10 cents"<<endl;
	cout<<cent_5<<"$5 cents"<<endl;
	return 0;
} 
