

#include "User.h"

#include <bits/stdc++.h >
#include <string >
using namespace std;



User:: User(){
            name=" ";
            count++;
            id=count ;
password="";
age=0;
email=" ";

        };
User::User( string name , int age , string email , string password ){
this->name =name ;
this ->age =age ;
this ->email =email;
this ->password =password ;
count++;
id =count ;

};

User::User(const User& user1){
    name=user1.name ;
    id = user1.id ;
    email=user1.email;
    password=user1.password;
    age=user1.age;

}
void  User::setName(string n ){
    name =n ;
};
string User:: getName()const{
    return name ;
};
void User:: setPassword(string p){
    password=p;
};
string User:: getPassword()const{
    return password;
};
void User:: setEmail(string e) {
email=e ;
}

string User:: getEmail()const{
    return email;
};
void User:: setAge(int a){
    age =a ;
};
int User:: getAge(){
    return age;
};
void User:: setId(int i){
    id =i;
};
int User:: getId(){
    return id ;
};
void User::Display(){
    cout <<"=============user information :================\n";
cout <<"Name ="<< name<<endl;
cout <<"id  ="<<id <<endl;
    cout <<"email   ="<<email  <<endl;
    cout <<"age   ="<<age <<endl;
};
bool User:: operator==(const User&user1){
    if (id ==user1.id&&age ==user1.age &&email==user1.email&&name ==user1.name ){
        return true ;}

    return false ;

};

ostream& operator<<(ostream& output , const User& u1 ){
    output <<"==========data of user whose id ="<<u1.id<< "===============\n";

    output<<" name =  "<<u1.name<<endl;
    output<<" email =  "<<u1.email <<endl;
    output<<" age  =  "<<u1.age <<endl;
    output<<"================================================\n";

    return output;

}
istream& operator>>(istream&in, User&u){
    cout <<"======================== enter the data of user in order=================\n  ";
    cout <<" |   name    | email | password |  age  \n    ";
    cout <<"===================free space to input=====================================\n ";
    in>>u.name >>u.email>>u.password>>u.age ;
    return in ;


};

int User::count = 0;

