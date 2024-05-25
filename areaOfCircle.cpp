/*
    
    Finding area of circle using functions
*/
#include <iostream>
#include <cmath>

using namespace std;

//function declaration and defintion

double circle_area(double radius){
	
	double area = M_PI*radius*radius;
	
	return area;
}
	
	


int main()
{
    
    double area_of_circle1 = circle_area(2);
    double area_of_circle2 = circle_area(1);
    
    cout << "Area 1 = "<<area_of_circle1<<endl;
    
    cout << "Area 2 = "<<area_of_circle2<<endl;
    
    return 0;
}

//function definition


