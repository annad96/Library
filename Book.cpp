#include "Book.h"
# include <string>

Book::Book(std::string title, std::string author, std::string keyword)
{
  author_ = author;
  title_ = title;
  keyword_ = keyword;
}

std::string Book::titleIs() const {
    return title_;
}

std::string Book::authorIs() const {
    return author_;
}

std::string Book::keywordIs() const {
    return keyword_;
}

std::ostream& operator<<(std::ostream& os, const Book& book)
{
    os << book.titleIs() << ": " << book.authorIs() << " - " << book.keywordIs();
    return os;
}
