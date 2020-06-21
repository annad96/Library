#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library
{
public:
	void addBook(Book newBook);
	void searchTitle(string title);
	void searchKeyword(string keyword);
};
