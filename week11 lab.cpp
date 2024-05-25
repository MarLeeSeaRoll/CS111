#include <iostream>
using namespace std;

const int size=10;



int productofnum(int numbers[]){
	int product;
	for(int i=0;i<size;i++){
		product*=numbers[i];
	}
	return product;
}
int sumofnums(int numbers[]){
	int sum = 0; 
	for(int i=0;i<size;i++){
		sum+=numbers[i];
	}
	return sum;
}

int aveofnums(int numbers[]){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=numbers[i];
	}
	int aven = sum/size;
	return aven;
}

int main(){
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	int product = productofnum(numbers);
	int sum = sumofnums(numbers);
	int aven= aveofnums(numbers);
	cout<<"Sum: "<<sum<<endl;
	cout<<"Product: "<<product<<endl;
	cout<<"Average: "<<aven<<endl;
	return 0;
}
