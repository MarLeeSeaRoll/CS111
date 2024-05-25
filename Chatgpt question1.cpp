#include <iostream>
using namespace std;
/*int sumArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    const int CAP = 5;
    int numbers[CAP]={1,2,3,4,5};
    int sum = sumArray(numbers, CAP);
    cout << sum << endl;
    return 0;
}*/
/*int findMin(int arr[], int size);

int main(){
    const int CAP = 5;
    int Numbers[CAP]={4,2,8,6,5};
    int min = findMin(Numbers, CAP);
    cout << min << endl;
    return 0;
}

int findMin(int arr[], int size){
    int low = arr[0];
    for (int i = 0; i < size;i++){
        if(low>arr[i]){
            low = arr[i];
        }
    }
    return low;
}*/
/*double averageArray(double arr[], int size);

int main(){
    int CAP = 5;
    double Numbers[CAP] = {1, 2, 3, 4, 5};
    double average = averageArray(Numbers, CAP);
    cout << "The average number is " << average;
}

double averageArray(double arr[], int size){
    double sum = 0;
    for (int i = 0; i < size;i++){
        sum += arr[i];
    }
    return sum / size;
}*/
/*void reverseArray(int arr[], int size);

int main()
{
    int CAP = 5;
    int Numbers[CAP] = {1, 2, 3, 4, 5};
    reverseArray(Numbers, CAP);
    for (int i = 0; i < CAP;i++){
        cout << Numbers[i];
    }
    return 0;
}

void reverseArray(int arr[], int size){
    int temp[size];
    for (int i = 0; i < size;i++){
        temp[i] = arr[size - 1 - i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    
}*/

bool containsValue(int arr[], int size, int value);

int main(){
    const int CAP = 5;
    int Numbers[CAP] = {1, 2, 3, 4, 5};
    int value = 3;
    bool containsValue(Numbers, CAP, value);
    if (containsValue(Numbers, size, value)){
        cout << "The value exist" << endl;
    }
    else{
        cout << "The value doesn;t exist." << endl;
    }
    return 0;
}

bool containsValue(int arr[], int size, int value){
    for (int i = 0; i < size;i++){
        if(arr[i]==value){
            return true;
        }
        return false;
    }
}