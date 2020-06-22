#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include "Book.h"

class Book;

class Library
{
public:
	Library();
	void addBook(Book newBook);
	void searchTitle(std::string title);
	void searchKeyword(std::string keyword);

private:
	std::vector<Book> books_;

};
#endif
