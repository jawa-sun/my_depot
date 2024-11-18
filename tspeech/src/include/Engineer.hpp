// Engineer.h
#ifndef ENGINEER_HPP_
#define ENGINEER_HPP_

#include "Employee.hpp"

class Engineer : public Employee {
private:
    int projects;
    double projectBonus;

public:
    Engineer(const std::string& name, int id, double baseSalary, int projects, double projectBonus);
    double calculateSalary() const override;
    void displayInfo() const override;
};

#endif
