/*
    
    Finding area of circle using functions
*/
#include <iostream>
#include <cmath>

using namespace std;

//function declaration and defintion

double rect_area(double len, double wid){
	
	double area = len*wid;
	
	return area;
}
	
	


int main()
{
    
    double area_of_rectangle1 = rect_area(2,3);
    
    cout << "Area 1 = "<< area_of_rectangle1<<endl;
        
    return 0;
}




