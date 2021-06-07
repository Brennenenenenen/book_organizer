/***************************************
 * Author: Brennen Smallwood
 * Date: June 2 2021
 * A class that can hold information about a book along with functions for 
 * basic comparing and searching
 * ************************************/

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>


class Book
{
private:
    std::string title;
    std::string author;
    int year;

public:
    //constructors
    Book();
    Book(std::string new_title, int year, std::string new_author);
    Book(std::string all_data);

    //deconstructor
    ~Book();

    //getters
    std::string getTitle();
    std::string getAuthor();
    int getYear();  

    //setters
    void setTitle(std::string new_title);
    void setAuthor(std::string new_author);
    void setYear(int new_year);

    //custom functions
    bool match_title(std::string target_title); 
    bool match_author(std::string target_author);
    bool match_year(std::string target_year);
    bool match(std::string target);
    void lower(std::string &s);

    //overloaded operators
    //output books to the screen
    friend std::ostream& operator <<(std::ostream &out, const Book &b);
    //compare two books
    friend bool operator ==(const Book &b, const Book &b2);
};




#endif