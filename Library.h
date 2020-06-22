#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include "Vec3D.h"
#include "Book.h"

class Book;

class Library
{
public:
	Library(Book newBook, std::string title, std::string keyword);
	void addBook(Book newBook);
	void searchTitle(std::string title);
	void searchKeyword(std::string keyword);
	std::vector<Vec3D> _books;

private:
	Book book_;
	
};
#endif
