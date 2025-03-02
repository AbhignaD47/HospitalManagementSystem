#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    string username;
    string password;
    string role;

public:
    User(string u, string p, string r);
    bool authenticate(string u, string p);
    string getRole();
};

#endif
