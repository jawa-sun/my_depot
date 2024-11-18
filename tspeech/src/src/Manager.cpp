// Manager.cpp
#include "Manager.hpp"
#include <iostream>

Manager::Manager(const std::string& name, int id, double baseSalary, double bonus)
    : Employee(name, id, baseSalary), bonus(bonus) {}

double Manager::calculateSalary() const {
    return baseSalary + bonus;
}

void Manager::displayInfo() const {
    std::cout << "经理姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary << ", 奖金: " << bonus << std::endl;
}
