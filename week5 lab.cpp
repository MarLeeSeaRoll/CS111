#include <iostream>
using namespace std;
int main(){
	char category = 'X';
	const int norm_wrk_hrs = 40;
	const double m_hour_rate =10.6;
	const double m_tax_rate =0.35;
	const double f_tax_rate =0.2;
	const double f_hour_rate = 8.3;
	const double overtime_factor= 1.5;
	double wrk_hrs = 0.0;
	double gross_wage=0.0;
	double net_wage = 0.0;
	double tax_amt= 0.0;
	cout <<"\t\theader here.\n";
	cout <<"Enter Category: 'M' for Management, 'F' for Floor Worker:";
	cin >>category;
	cout <<"Enter Hours Work in this week: ";
	cin >> wrk_hrs;
	if(category == 'M'){
		if(wrk_hrs <= norm_wrk_hrs){
			gross_wage = wrk_hrs * m_hour_rate;
		}
		else{
			gross_wage = (norm_wrk_hrs * m_hour_rate)+ (wrk_hrs - norm_wrk_hrs )*m_hour_rate*overtime_factor;
		}
		tax_amt = gross_wage * m_tax_rate;
		net_wage = gross_wage - tax_amt;
		cout<<"Staff Category:M \n";
		cout<<"Hours worked: "<<wrk_hrs<<endl;
		cout<<"Net wage: "<<net_wage<<endl;
	}
	else if(category == 'F'){
		if(wrk_hrs <= norm_wrk_hrs){
			gross_wage = wrk_hrs * f_hour_rate;
		}
		else{
			gross_wage = (norm_wrk_hrs * f_hour_rate)+ (wrk_hrs - norm_wrk_hrs )*f_hour_rate*overtime_factor;
		}
		tax_amt = gross_wage * f_tax_rate;
		net_wage = gross_wage - tax_amt;
		cout<<"Staff Category:F \n";
		cout<<"Hours worked: "<<wrk_hrs<<endl;
		cout<<"Net wage: "<<net_wage<<endl;
}
	else{
		cout<<"\n\t\tError!";
	}
	
	return 0;
} 
