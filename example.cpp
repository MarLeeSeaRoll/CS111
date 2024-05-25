 #include <iostream> 
 using namespace std;
 int main(){
 
 
 double x = 1.0;
 bool stop = false; 
	do{
   	x = 2.0 * x + 1.0;
    stop = (x >= 10.0 );
	}while(!stop); 
    cout << "Number:" << x << endl; 
  system("pause"); 
  return 0;
}
