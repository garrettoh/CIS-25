#pragma once
#include <iostream>

class User {
public:
    virtual void accessLevel();
    virtual ~User() = default;
};
