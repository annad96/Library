#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

class Book
{

public:
	Book(std::string title, std::string author, std::string keyword);
	std::string titleIs() const;
	std::string authorIs() const;
	std::string keywordIs() const;
  friend std::ostream& operator<<(std::ostream& os, const Book& book);

private:
  std::string author_;
  std::string title_;
  std::string keyword_;
};

#endif
