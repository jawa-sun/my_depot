// Manager.h
#ifndef MANAGER_HPP_
#define MANAGER_HPP_

#include "Employee.hpp"

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const std::string& name, int id, double baseSalary, double bonus);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif
