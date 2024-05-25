#include <iostream>
using namespace std;
int main(){
    int stars=4;
    for(int i=0;i<stars;i++)
	{
        for(int y=1;y<i;y++){
            	cout<<"  "; 
            }
		for(int j=stars;j>i;j--){
            
           cout<<"* " ;
        }
       
       cout<<"\n"; 
    }
return 0;
}

