#include <iostream>
using namespace std;
int main(){

int number = 0;
 char reply;
 bool is_positive;
 
 cout << "Enter a number: ";
 cin >> number;
 
 cout << "Enter a letter: ";
 cin >> reply;
 
 is_positive = (number >=0);
 
 if( is_positive && number < 10){
   cout << "Roses are red. "; 
 } 
 
 if(!is_positive){
   cout << "Violets are blue. " ; 
 }
 
 if(reply >= 'A' && reply <= 'Z'){
   cout << "Sugar is sweet. "; 
 }
 if(reply < 'A' || reply > 'M'){
   cout << "So are you. "; 
 } 
return 0;
}
