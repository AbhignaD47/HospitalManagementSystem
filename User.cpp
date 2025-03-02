#include "User.h"

User::User(string u, string p, string r) : username(u), password(p), role(r) {}

bool User::authenticate(string u, string p) {
    return (username == u && password == p);
}

string User::getRole() { return role; }
