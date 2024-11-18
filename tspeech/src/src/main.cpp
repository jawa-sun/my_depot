// main.cpp
#include "Manager.hpp"
#include "Engineer.hpp"
#include <iostream>

void showEmployeeInfo(const Employee& emp) {
    emp.displayInfo();
    std::cout << "总薪资: " << emp.calculateSalary() << std::endl << std::endl;
}

int main() {
    Manager manager("张经理", 1001, 8000, 2000);
    Engineer engineer("李工程师", 1002, 5000, 3, 500);

    showEmployeeInfo(manager);
    showEmployeeInfo(engineer);

    return 0;
}
