
#include <iostream>
using namespace std ;
#include"User.h"
#include "Book.h"
#ifndef UNTITLED5_USERLIST_H
#define UNTITLED5_USERLIST_H

class UserList
{
private:
    User* users;
    int capacity;
    int usersCount;
public:
    UserList();
    UserList(int );
    void addUser(User &);
    User* searchUser(string );
    User* searchUser(int );
    void deleteUser(int );
    friend ostream &operator<<( ostream& ,const UserList&);
    ~UserList();
};
#endif //UNTITLED5_USERLIST_H
