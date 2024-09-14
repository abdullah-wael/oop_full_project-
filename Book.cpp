
#include <iostream >
#include <string >
using namespace std;
#include"User.h"

#include "Book.h"



int Book:: count=0;
Book::Book(){
title=" ";
category=" ";
isbn=" ";
count++;
id=count;
averageRating=0.0;
    User *author=new User;
};
Book::Book(string a , string b, string c){

    title=a;
    isbn=b ;
    category=c;
    count++;
    id=count;
    User *author=new User;


};
Book::Book(const Book& b  ){
    title=b.title;
    category=b.category;
    isbn=b.isbn;
    id=b.id;
    author=b.author;



};
void Book:: setTitle(string  t){
    title =t ;
};
string Book:: getTitle() const{
    return title ;
} ;
void Book::setIsbn(string i ){
    isbn=i;
};
string Book::getIsbn() const{
    return isbn ;
};
void Book::setId(int i){
    id=i;
};
int Book::getId() const{
    return id ;
};
void Book::setCategory(string c){
    category=c;
};
string Book::getCategory()const{
    return category;
};
void Book::setAuthor(const User & u ){
    //hasAuthor=true ;
    author= u;
};
User Book:: getAuthor() const{
    return author;
};
void Book::rateBook(double r ){
    rate=r;
    NumRate++;
    SumRate=SumRate+rate;
    averageRating= SumRate/NumRate;
};
double Book:: getAverageRating () const{

    return averageRating;


};
bool Book::operator==(const Book& b){
    if (title==b.title &&isbn==b.isbn&&category==b.category&& id==b.id )
    return true ;
    return false;
};
 ostream &operator<<(ostream & o, const Book & b){
o<<"============ book   "<<b.id<<"   info============================\n";
o<<"title   |"<<b.title;
o<<"   isbn    | "<<b.isbn;
o<< "   category  |  "<<b.category;
o<<"    avarage rating   |"<<b.averageRating;
o<<"    id     |"<<b.id <<endl;
cout << endl;
if (b.getAuthor().getName()!=" ")
cout <<b.author.getName()<<endl;
o<<"===================================================================\n";
return o;
 };
istream &operator>>( istream & i, Book & b){
cout <<"=============================enter book info to add ====================\n";
cout <<"============================free space to in order title category isbn  ============================\n";
i>>b.title>>b.category>>b.isbn;



return i;

};
