#include <iostream> 
#include <iomanip>
using namespace std;

/*void buzzfuzz(){

	for(int x=1;x<=100;x++){
		if(x%3 == 0 && x%7 == 0){
			cout<<"Fizzbuzz"<<endl;
		}
		else if(x%3==0){
			cout<<"Fizz"<<endl;
		}
		else if(x%7==0){
			cout<<"Buzz"<<endl;
		}
	}
}
	
int main(){
	
	buzzfuzz();
	return 0;
}*/

/*void fizzbuzz(){
	string ans = "";
	for(int i = 0; i<=100; i++){
		if(i%3 == 0){
			ans += "Fizz";
		}
		if(i%7 == 0){
			ans += "Buzz";
		}
	cout<<ans<<endl;
	ans = "";
	}
	

}

int main(){
	
	fizzbuzz();
	return 0;
}
*/
int main(){

for(string name = "*"; name.length() <=9; name+=" *"){
	cout<<name<<endl;
}
return 0;
}
