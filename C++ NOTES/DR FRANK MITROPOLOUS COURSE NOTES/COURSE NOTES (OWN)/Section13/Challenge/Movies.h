#ifndef MOVIES_H
#define MOVIES_H

#include "Movie.h"
#include <string>
#include <vector>

class Movies
{
    
public:
    std::vector<Movie> movies;
    Movies();
    ~Movies();
    
bool add_movie(std::string name, std::string rating, int watched);
bool increment_watched_count(std::string name);
void display_movies();

};

#endif // MOVIES_H
