

#include "BookList.h"
BookList::BookList(){
    capacity=0;
    booksCount=0;



};
BookList::BookList(int a){
    capacity=a;
    booksCount=0;
   books=new Book[capacity];
};
void BookList::addBook(const Book& b1 ){
    if (booksCount<capacity){
    books[booksCount]=b1;
    booksCount++;}
    else {
        cout <<"books is full \n ";
    }


}; // at the end of the array.
Book *BookList::searchBook(string name ){
    for (int i=0 ;i<booksCount;i++){
if (books[i].getTitle()==name )
    return &books[i];
else
    return nullptr;

    }

};
Book * BookList:: searchBook(int id  ){
    for (int i=0 ;i<booksCount;i++){
        if (books[i].getId()== id )
            return &books[i];
        else
            return nullptr;

    }


};
void BookList::deleteBook(int id  ){
    for (int i=0 ;i<booksCount;i++){
        if (books[i].getId()==id  )
            while (i<booksCount){
                books[i]=books[i+1];
                i++;
booksCount--;
--capacity;
break;
            }

    }


};

Book BookList::getTheHighestRatedBook(){
    double max=0.0;
    int max_index=0;
for (int i=0 ;i<booksCount;i++){
if (books[i].getAverageRating()>max ){
    max =books[i].getAverageRating();
    max_index=i;

}}
    return books[max_index];


};
void BookList::getBooksForUser(const User & u ){

for (int i=0 ;i<booksCount;i++){
    if (books[i].getAuthor()==u){
        cout <<books[i]<<" ";

    }

}


};
Book & BookList:: operator[] (int position ){
if (position<0||position>=booksCount){
cout <<"error of position \n";
exit(1);}
    return books[position];

};
ostream&operator<<(ostream & out  ,const BookList & b1 ){
    for (int i=0 ;i<b1.booksCount;i++){

out <<b1. books[i];

    }




}; //to display all books
