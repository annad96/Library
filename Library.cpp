#include "Library.h"
#include "Book.h"

#include <iostream>
#include <vector>

Library::Library()

{
	// _books = { {" "," "," "} };
}

void Library::addBook(Book newBook)
{
	//newBook.add(Book::title, Book::author, Book::keyword)
	// newBook.title;
	// newBook.author;
	// newBook.keyword;
  books_.push_back(newBook);
}

void Library::searchTitle(std::string title)
{
  bool found = false;

	for (int i = 0; i < books_.size(); i++) {
    if (books_[i].titleIs().find(title) != std::string::npos) {
      std::cout << books_[i] << std::endl;
      found = true;
    }
  }

  if (!found) {
    std::cout << "Gibbet nit" << std::endl;
  }
}

void Library::searchKeyword(std::string keyword)
{
  bool found = false;

  for (int i = 0; i < books_.size(); i++) {
    if (books_[i].keywordIs().find(keyword) != std::string::npos) {
      std::cout << books_[i] << std::endl;
      found = true;
    }
  }

  if (!found) {
    std::cout << "Gibbet nit" << std::endl;
  }
}
