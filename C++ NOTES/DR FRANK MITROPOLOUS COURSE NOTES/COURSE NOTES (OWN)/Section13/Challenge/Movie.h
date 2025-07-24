#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    int movie_watched;
public:
    // Constructor Prototype
    Movie(std::string name, std::string rating,int watched);
    
    // Destructor Prototype
    ~Movie();
    
    std::string get_name() const;
    void increase_movie_rating();
    
};

#endif // MOVIE_H
