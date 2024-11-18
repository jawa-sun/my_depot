// Employee.cpp
#include "Employee.hpp"
#include <iostream>

Employee::Employee(const std::string& name, int id, double baseSalary) 
    : name(name), id(id), baseSalary(baseSalary) {}

double Employee::calculateSalary() const {
    return baseSalary;
}

void Employee::displayInfo() const {
    std::cout << "员工姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary << std::endl;
}
