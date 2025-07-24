#include <iostream>
#include "Movie.h"


using namespace std;

Movie::Movie(std::string name, std::string rating,  int watched)
    : movie_name{name}, movie_rating{rating}, movie_watched{watched}{
        cout << "Movie Parameterized Constructor callled" << endl;
    }

Movie::~Movie(){
    cout << "Movie Destructor Called" << endl; 
    
}

string Movie::get_name() const{
    cout << "Returned value from get_name() function is: " << movie_name << endl;
    return movie_name;
}


void Movie::increase_movie_rating(){
    Movie::movie_watched +=1;
}