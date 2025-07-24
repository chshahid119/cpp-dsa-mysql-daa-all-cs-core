#include "Movies.h"
#include <iostream>

using namespace std;


//Movies::Movies()
//:Movies{"None", "No" , 0}{
//    cout << "Default Constructor Called here" << endl;
//}


Movies::Movies(){
    cout << "Movies Collection Created" << endl;
}

//Movies::Movies(std::string name, std::string rating, int watched)
//{
//    cout << "Movies parameterized Constructor is called here" << endl;
//    this->Mov.push_back(Movie(name, rating, watched));
//}

//Movies::~Movies()
//{
//    cout << "Movies Destructor is called" << endl;
//}

Movies::~Movies(){
    cout << "Movies Destructor called" << endl; 
}


bool Movies::add_movie(std::string name, std::string rating, int watched) {
    // 1. Check for duplicate
    for (const auto &i : movies) {
        if (i.get_name() == name) {
            cout << "Movie is already in your collection ----- fuck off" << endl;
            return false;   // movie already exists
        }
    }
    // 2. Add after checking all
    movies.push_back(Movie(name, rating, watched));
    cout << "Movie added into movie" << endl;
    return true;
}


bool Movies::increment_watched_count(std::string name){
    for(auto &i: movies){
        if(i.get_name() == name){
            i.increase_movie_rating();
            return true;
        }
    }

}


void Movies::display_movies(){
    for(auto &i: movies){
        cout << i.get_name() << endl;
    }
}