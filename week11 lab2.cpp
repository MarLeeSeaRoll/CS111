#include <iostream>
using namespace std;
void double_up(int arr[], int size);
int main(){
	const int CAPACITY = 100;
	int numArray[CAPACITY];
	int data=0;
	int cur_size=0;
		cout<<"Please enter some value or q to quit:"<<endl;
		while(cin>>data){
			if(cur_size<CAPACITY){
				numArray[cur_size]=data;
				cur_size++;
			}
			cin.clear();
			cin.ignore();
		}
		double_up(numArray,cur_size);
		
		cout<<"COntents: "<<endl;
		for(int i =0;i<cur_size;i++){
			cout<<numArray[i]<<endl;
		}
		 return 0;

}
void double_up(int arr[], int size){
	for(int i = 0; i<size;i++){
	arr[i]=arr[i]*2;
}
}
