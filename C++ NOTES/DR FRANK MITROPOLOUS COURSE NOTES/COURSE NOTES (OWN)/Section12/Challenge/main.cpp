#include <iostream>
using namespace std;

int* apply_all(const int *const arr1 ,size_t arr1Size,const int *const arr2,size_t arr2Size){
    int *newArray = new int[arr1Size * arr2Size];
    int position = 0;
    for(size_t i = 0; i < arr1Size; ++i){
        for(size_t j = 0; j < arr2Size; ++j){
            newArray[position++] = arr1[i] * arr2[j];
        }
    }
    return newArray;
}

void display_ArrayProduct(int *const arr, size_t size){
    for(size_t i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30};

    size_t arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    size_t arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Size of Array 1 is: " << arr1Size << endl;
    cout << "Size of Array 2 is: " << arr2Size << endl;

    int* results = apply_all(arr1, arr1Size, arr2, arr2Size);
    
    // ✅ Correct number of elements = arr1Size * arr2Size
    display_ArrayProduct(results, arr1Size * arr2Size);

    delete[] results;
    return 0;
}
