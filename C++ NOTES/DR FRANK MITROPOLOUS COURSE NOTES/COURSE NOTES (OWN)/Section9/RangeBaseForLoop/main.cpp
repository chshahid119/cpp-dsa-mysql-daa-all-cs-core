//Range Based For Loop


#include <iostream>
using namespace std;

int main(){
    
    int scores[]  {4,6,7,8};
    
    for(auto score: scores){
        cout << "The Score is: " << score<< endl;
    }
    
    return 0;
}