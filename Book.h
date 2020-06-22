#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>
#include "Vec3D.h"

class Book
{

public:
	Book(std::string author, std::string title, std::string keyword);
	std::string titleIs() const;
	std::string authorIs() const;
	std::string keywordIs() const;

private:
  std::string author_;
  std::string title_;
  std::string keyword_;
};
#endif
