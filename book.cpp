#include "book.h"

Book::Book()
{
    title = "***";
    author = "***";
    year = 0;
}

Book::Book(std::string new_title, int new_year, std::string new_author) {
    title = new_title;
    author = new_author;
    year = new_year;
}

Book::Book(std::string all_data) {
    std::string splitTitle;
    std::string splitAuthor;
    int splitYear = 0;

    splitTitle = all_data.substr(0, all_data.find('|'));
    //gets the year from between two pipes '|' and converts to int
    splitYear = std::stoi(all_data.substr(all_data.find('|') + 1, all_data.find_last_of('|') + 1));
    splitAuthor = all_data.substr(all_data.find_last_of('|') + 1, all_data.length());

    author = splitAuthor;
    year = splitYear;
    title = splitTitle;
}

Book::~Book()
{
}

std::string Book::getTitle() {
    return title;
}

std::string Book::getAuthor() {
    return author;
}

int Book::getYear() {
    return year;
}

void Book::setTitle(std::string new_title) {
    title = new_title;
}

void Book::setAuthor(std::string new_author) {
    author = new_author;
}

void Book::setYear(int new_year) {
    year = new_year;
}

bool Book::match_title(std::string target_title) {
    //convert 
    return false;
}

std::ostream& operator <<(std::ostream &out, const Book &b) {
    out << b.title << '|' << b.year << '|' << b.author;
    return out;
}

bool operator ==(const Book &b, const Book &b2) {
    if(b.title == b2.title && b.year == b2.year 
                        && b.author == b2.author) {
        return true;
    }

    return false;
}