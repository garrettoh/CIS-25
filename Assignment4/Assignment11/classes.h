#pragma once
#include "Employee.h"

class Manager : public Employee {
public:
    void accessLevel() override;
};
