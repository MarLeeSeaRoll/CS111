    // "If you think it's simple, then you have misunderstood the problem." - Bjarne Stroustrup
    
#include <iostream>
using namespace std;

int main()
{

    int stars = 5;
	int i=0;

    // Use a For Loop and a While loop to complete these questions:

	// 1) Write a program that prints 5 stars in a line (easy)
	/*for(int i=1;i<=stars;i++){
		cout<<"* ";
	}*/
    // Output: * * * * *
	/*while(i<stars){
		cout<<"* ";
		i++;
	}*/
    // ------------------------------------------------------------------------

    // 2) Write a program that prints 5 stars, each on a new line (medium)
	/*for(int i=0; i<stars; i++){
		cout<<"*\n";
	} */
	/*while(i<stars){
		cout<<"*\n";
		i++;
	}
	*/
    // Output:
    // *
    // *
    // *
    // *
    // *
	
    // ------------------------------------------------------------------------

    // 3) Write a program that prints 25 stars (5 rows and 5 columns) (hard)
	/*for(int i=0; i<stars; i++){
		for(int j=0; j<stars;j++){
			cout<<"* ";
		} 
			cout<<"\n";
	}
	*/
	while(i<stars){
		int j=0;
		while(j<stars){
			cout<<"* ";
			j++;
		}
		cout<<"\n";	
		i++;
	}
	
    // Output:
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    return 1;
}
