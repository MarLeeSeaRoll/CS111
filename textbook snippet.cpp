#include <iostream>
using namespace std;
int doublenum(int& a){ 
  a = 2 * a;  
return a/3; 
} 
 int main(){ 
 int mark,num = 21; 
 mark = doublenum(num); 
 cout << "Result=" << num; 
 return 0; 
} 
