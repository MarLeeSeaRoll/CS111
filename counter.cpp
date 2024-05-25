/*
    
     program to print numbers from 1 - 10
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
   int count = 1;         //initialize counter
   while (count <= 10)
   {
       cout << count << endl;
       count = count + 1;        // Notice this statement
   }
   system("PAUSE");
   return 0;
}

