//main.cpp

#include <iostream>
# include <string>
#include "Library.h"
#include "Book.h"

int main()
{
    Book book1("Harry Potter and the Sorcerer's Stone ", "J.K. Rowling",
        "magic wizard stone classic");
    Book book2("The Feynman Lectures", "R.P. Feynman",
        "physics science classic");
    std::cout << book1.authorIs() << std::endl;
    // Library lib;
    // lib.addBook(book1);
    // lib.addBook(book2);

    // lib.searchTitle("Bible");
    // lib.searchKeyword("classic");
}
