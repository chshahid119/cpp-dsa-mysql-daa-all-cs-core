#include <iostream>
using namespace std;

int main(){
    
//    int num {};
//    cout << "Enter a positive integer to count upto: ";
//    cin >> num;
//    
//    int i {1};
//    while(num >= i){
//        cout << i << endl;
//        i++;
//    }


// 1) Right Angled Triangle
//*
//* *
//* * *
//* * * *
//* * * * *    

for (int i=0; i<=5;i++){
   for(int j=0;j<=i; j++){
       cout << "*" ;
   }
   cout << endl;
}


// 2) Inverted Triangle
//* * * * *
//* * * *
//* * *
//* *
//*

cout << endl;

for (int i=5;i>=0;i--){
    for (int j=0;j<=i;j++){
        cout << "*";
    }
    cout << endl;
}



// 3) Pyramid
//    *
//   * *
//  * * *
// * * * *
//* * * * *


    int rows = 5;
    for(int i = 1; i <= rows; ++i) {
        for(int space = 1; space <= rows - i; ++space)
            cout << " ";
        for(int j = 1; j <= i; ++j)
            cout << " *";
        cout << endl;
    }


return 0;

}