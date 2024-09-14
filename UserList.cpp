//
// Created by paragon on 08/09/2024.
//
#include <iostream>
using namespace std ;
#include"User.h"
#include "Book.h"

#include "UserList.h"
UserList::UserList(){
    capacity=0;

    usersCount=0;
};
UserList::UserList(int i ){
    capacity=i;
    usersCount=0;
    users=new User[capacity];

};
void UserList::addUser(User &u){
    if (usersCount<capacity){
    users[usersCount]=u;
    users[usersCount].setId(usersCount+1);
    usersCount++;}

};
User * UserList::  searchUser(string name   ){
    for (int i=0;i<usersCount;i++){
        if (users[i].getName()==name ){
            return &users[i];


        }
        return nullptr;
    }


};
User   *UserList:: searchUser(int i ){
    for (int i=0 ;i<usersCount;i++){
        if (users[i].getId()==i){
            return & users[i];
        }
        return nullptr;
    }
};
void UserList::deleteUser(int  i ){
    for (int i=0 ;i<usersCount;i++){
        if (users[i].getId()==i){
            while (i<usersCount-1){
                users[i]=users[i+1];
                i++;
            }
            usersCount--;
            capacity--;
            break;
        }
    }
};
 ostream &operator<<( ostream& o ,const UserList& ul){
     for (int i=0 ;i<ul.usersCount;i++){
         o<<ul.users[i];

     }
     return o;
 };
UserList::~UserList(){
    delete []users;
};
