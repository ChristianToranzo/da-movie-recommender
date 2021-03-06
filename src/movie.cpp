#include "movie.hpp"
#include <iostream>

std::string Movie::getID() const
{
    return this->name + "_" + this->year;
}

void Movie::print() const
{
    std::cout << this->name << std::endl;
    std::cout << '\t' << "Year: " << this->year << std::endl;
    std::cout << '\t' << "Genres: " << setToString(this->genres) << std::endl;
    std::cout << '\t' << "Available Languages: " << setToString(this->languages) << std::endl;
    std::cout << '\t' << "Directors: " << setToString(this->directors) << std::endl;
    std::cout << '\t' << "Notable Actors: " << setToString(this->actors) << std::endl;
    std::cout << '\t' << "Notable Writers: " << setToString(this->writers) << std::endl;
    std::cout << '\t' << "Average Rating: " << this->avgRating << std::endl;
    std::cout << '\t' << "Number of Ratings: " << this->ratings << std::endl;
}

std::string Movie::setToString(const std::set<std::string>& set) const
{
    std::string str; 

    for(auto it = set.begin(); it != set.end(); it++)
    {
        str += *it;
        if(it != --set.end())
            str += ", ";
    }

    return str;
}


void Movie::scoreMovies(std::map<std::string, Movie> movies, Movie* selectedMovie) const
{
	//goes through map of movies, and scores them based on input movie
}
