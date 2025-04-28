#include <iostream>

using namespace std;

int main(){
    char vowels [] {'a','e','i','o','u'};
//    cout << sizeof vowels << endl;
    cout << "\n The first vowel is: " << vowels[0] << endl;
    cout << "\n The Last vowel is: " << vowels[4] << endl;
    cout << "------------------------------------------" << endl;
    
    
    int arr[5] {5,9,8,7,6};
    int arrSize= sizeof(arr);
    cout << arrSize;
    int largest_element;
    for(int i=0;i< arrSize-1; i++){
    if (arr[i+1] > arr[i]){
        largest_element = arr[i+1];
    }
    else {
        largest_element = arr[i];
    }
    }
    
    cout << "The Largest Element in Array is: " << largest_element << endl;
    return 0;
}