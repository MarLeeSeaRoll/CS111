#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int numofa=0;
int numofe=0;
int numofi=0;
int numofo=0;
int numofu=0;


char sentence[]={"The quick brown fox jumps over the lazy dog"};

int main(){
	for(int i = 0; i <= str.length(sentence); i++){
	if(sentence [i] = 'a'||sentence [i] = 'A'){
		numofa++;
		}
	else if(sentence [i]='e'||sentence [i]='E'){
		numofe++;
		}
	else if(sentence [i]='i'||sentence [i]='I'){
		numofi++;
		}
	else if(sentence [i]='o'||sentence[i]='O'){
		numofo++;
		}
	else if(sentence [i]= 'U'||sentence[i]='U'){
		numofu++;
		}
	}
	cout<<numofa<<endl;
	
}
