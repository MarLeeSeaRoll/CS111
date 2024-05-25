#include <iostream>
#include <cstring>
using namespace std;

const int size = 5;
int num[size]={};
int numbers_copy[size];
int main(){
	cout<<"Please input five numbers.\n";
	for(int i=0;i<size;i++){
	
	cin>>num[i];
	while(cin.fail()){
		string dummy;
		cin>>dummy;
		cout<<"Invalid input. Please try again.\n";
		cin>>num[i];
		}
	}
	for(int i=0; i<size;i++){
		numbers_copy[i]=num[i];		
	}
	int max = numbers_copy[0];
	int min = numbers_copy[0];
	for(int i=0;i<size;i++){
		if(max<numbers_copy[i]){
			max = numbers_copy[i];
		}
		else if(min>numbers_copy[i]){
			min = numbers_copy[i];
		}	
	}
	cout<<"Max num is "<<max<<endl;
	cout<<"Min num is "<<min<<endl;
	return 0;
}
