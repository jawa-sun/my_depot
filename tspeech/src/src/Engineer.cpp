// Engineer.cpp
#include "Engineer.hpp"
#include <iostream>

Engineer::Engineer(const std::string& name, int id, double baseSalary, int projects, double projectBonus)
    : Employee(name, id, baseSalary), projects(projects), projectBonus(projectBonus) {}

double Engineer::calculateSalary() const {
    return baseSalary + projects * projectBonus;
}

void Engineer::displayInfo() const {
    std::cout << "工程师姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary 
              << ", 项目数量: " << projects << ", 项目奖金: " << projectBonus << std::endl;
}
