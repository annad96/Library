#include "Library.h"

#include <iostream>
#include <vector>

Library::Library(Book newBook, std::string title, std::string keywords) 

{
	_books = { {" "," "," "} };
}

void Library::addBook(Book newBook)
{
	//newBook.add(Book::title, Book::author, Book::keyword)
	newBook.title;
	newBook.author;
	newBook.keyword;
}

void Library::searchTitle(std::string title)
{
	std::cout << "Title: " << book_.title;
	std::cout << "Author: " << book_.author;
	std::cout << "Keywords: " << book_.keyword;
}

void Library::searchKeyword(std::string keyword)
{

}
