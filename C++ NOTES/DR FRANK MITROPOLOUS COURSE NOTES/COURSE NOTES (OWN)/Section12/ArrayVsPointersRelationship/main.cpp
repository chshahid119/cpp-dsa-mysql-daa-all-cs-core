#include <iostream>

using namespace std;

int main(){
    
    int vals[] = {1,50,3,28,32,500};
    
    int* valptr = vals;
    
    
//    cout << *vals << endl;
//    cout << *valptr << endl;
//    cout << &vals << endl;
//    cout << valptr << endl;
    
    
    cout << vals << endl; //0xhjdsakfh
    cout << &vals << endl; //0xhjdsakfh
    cout << *(&vals) << endl; //
    cout << *(*(&vals)) << endl; // Now it derefence to that address to give value
    cout<<valptr<<endl;

//    cout << endl;
//    cout << endl;
//    
//    cout<<valptr[1]<<endl;//outputs 50
//    cout<<vals[1]<<endl;//outputs 50
//    cout<<*vals<<endl;//outputs 1
//    cout<<*valptr<<endl;//outputs 1
//    
//    cout << endl;
//    cout << endl;
//    
//    cout<<*(&valptr +1)<<endl;
//
//    cout<<*(&valptr +1)-valptr<<endl;
//
//    cout<<endl;
//
//    cout<< *(&vals + 1) -vals<<endl;

    return 0;
}