#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int stars = 4; 
	/*int i=9;
	do{
				cout<<i<<endl;
		i-=3;
	}
	while(i>=-3)*/
	
	/*for(int i = 1;i<=stars;i++){		
		for(int j=stars;j>i;j--){
			cout<<"* ";			
		} 
		cout<<"\n";
	}*/
	for(int i = 1;i<=stars;i++){		
		for(int j=0;j<i;j++){
			cout<<"* ";			
		} 
		cout<<endl;
	}

	return 0;
} 
