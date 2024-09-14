
#include <iostream >
#include <string >
using namespace std;
#include"User.h"
#ifndef UNTITLED5_BOOK_H
#define UNTITLED5_BOOK_H


class Book
{
private:
    string title;
    string isbn;
    int id;
    string category;
  double averageRating=0.0;
    User author;
    double rate =0.0;
  double SumRate =0.0;
    double NumRate=0.0 ;
    //bool hasAuthor=false ;
public:
    static int count;
    Book();
    Book(string , string , string );
    Book(const Book& );
    void setTitle(string );
    string getTitle() const ;
    void setIsbn(string );
    string getIsbn() const;
    void setId(int);
    int getId() const;
    void setCategory(string );
    string getCategory()const;
    void setAuthor(const User & );
    User getAuthor() const;
    void rateBook(double );
    double getAverageRating () const;
    bool operator==(const Book&);
    friend ostream &operator<<(ostream &, const Book &);
   ~Book(){

   }
    friend istream &operator>>( istream &, Book &);
};

#endif //UNTITLED5_BOOK_H
