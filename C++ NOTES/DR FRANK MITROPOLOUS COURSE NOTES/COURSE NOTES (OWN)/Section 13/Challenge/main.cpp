#include <iostream>
#include "Movies.h"


using namespace std;

int main(){
    
//    Movies Shahid;
    
    Movies shahid_collection;
    
    shahid_collection.add_movie("Titanic", "PG-2", 5);
    shahid_collection.add_movie("Lost", "PG-6", 8);
//    shahid_collection.add_movie("Titanic", "PG-4", 6);
//    shahid_collection.add_movie("Lost", "PG-6", 8);
    
    bool inc = shahid_collection.increment_watched_count("Titanic");
    if(inc){
        cout << "Movie Incremented" << endl;
    }
    
    
    cout << "================================================"<< endl;
    shahid_collection.display_movies();
    cout << "================================================"<< endl;

    
    return 0;
}


