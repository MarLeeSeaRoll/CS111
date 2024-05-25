 #include <iostream>
using namespace std;
void printstars(int a,int b){
b = b + (b - a + 1)%2;
for(int i = 0; i < a; i++){cout << " ";}
for(int i = a; i < b; i++){cout << "*";}
cout << endl;
}
bool shrink_and_check(int &left, int &right){
 left++;
    right--;
    return (left>right);
 }
 int main(){
   bool isempty = false;
    int start = 0;
    int end = 50;
    while(!isempty){
       int length = end - start + 1; 
       cout << length << "\t";
       printstars(start,end);
       isempty = shrink_and_check(start,end);
    }
    cout << endl;
    system("pause");
    return 0;
  }

