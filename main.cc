#include "book.h"
#include <iostream>
#include <string>

int main() { 
    // test main class to test drive all functions
    // testing the default constructor
    {
        Book b = Book();
        std::cout << "TESTING THE DEFAULT CONSTRUCTOR\n\n";
        std::cout <<  "The title is " << b.getTitle() 
        << " the author is " << b.getAuthor() 
        << " the year is " << b.getYear() << std::endl << std::endl;
    }

    //testing custom constructor 1
    std::cout << "TESTING CUSTOM CONSTRUCTOR NUMBER 1\n\n";
        Book b2 = Book("Title", 1954, "Author");
        std::cout <<  "The title is " << b2.getTitle() 
        << " the author is " << b2.getAuthor() 
        << " the year is " << b2.getYear() << std::endl << std::endl;

    //testing custom constructor 2
    std::cout << "TESTING CUSTOM CONSTRUCTOR NUMBER 2\n\n";
    std::string testInput = "Title|1954|Author";
    std::cout << " the test input is: " << testInput << std::endl;
    Book b3 = Book(testInput);
    std::cout <<  "The title is " << b3.getTitle() 
        << " the author is " << b3.getAuthor() 
        << " the year is " << b3.getYear() << std::endl << std::endl;

    //testing the overloaded << operator and overlaoded == operator;
    std::cout << b3 << std::endl;
    if(b2 == b3) {
        std::cout << "YASSSS\n";
    }

    return 0;
}