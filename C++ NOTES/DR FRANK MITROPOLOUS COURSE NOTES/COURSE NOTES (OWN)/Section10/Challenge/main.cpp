#include <iostream>
#include <string>

using namespace std;
int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr "};
    
    
    string message;
    string encrypted_message;
    string decrypted_message;
    cout << "Please Enter your Message to crypt: " ;
    getline(cin, message);
    
//    First Method 
    for(size_t i=0; i < message.length(); ++i) // for message itself
    {
        for(size_t j=0; j< alphabet.length(); ++j) // for all alphabets
        {
            if(message[i] == alphabet.at(j) && message[i] != '!')
            {
                encrypted_message += key.at(j);
            }

            
        }
    }
    
    
    cout << "\nEncrypted...." << endl;
    cout << "\nYour Encrypted message will be: " << encrypted_message << endl;    
    
    cout << "\n=======================================================" << endl;
    
    char decesion {};
    cout << "\nDo you want to decrypt that message? (Y/N): " ;
    cin >> decesion;
    
    
    if(decesion == 'Y' || decesion == 'y'){
     for(size_t i=0; i < encrypted_message.length(); ++i) // for encrypted message itself
    {
        for(size_t j=0; j< alphabet.length(); ++j) // for all alphabets
        {
            if(encrypted_message[i] == key.at(j) && message[i] != '!')
            {
                decrypted_message += alphabet.at(j);
            }
        }
    }
    }
    
    cout << "\nDecrypted...." << endl;
    cout << "\nThe Decrypted Message is: " << decrypted_message << endl;
    
//    for(size_t i=0; i< alphabet.length(); ++i){
//        for(size_t j=; j<key.length(); ++j){
//           
//        }
//    }
    
    
    
//    cout << message << endl;
    cout << endl;
    return 0;
}