// Employee.h
#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double baseSalary;

public:
    Employee(const std::string& name, int id, double baseSalary);
    virtual double calculateSalary() const;
    virtual void displayInfo() const;
    virtual ~Employee() {}
};

#endif
