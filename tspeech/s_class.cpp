#include <iostream>
#include <string>

using namespace std;

// 基类 Employee，体现封装
class Employee {
protected:
    string name;
    int id;
    double baseSalary;

public:
    Employee(const string& name, int id, double baseSalary) 
        : name(name), id(id), baseSalary(baseSalary) {}

    // 虚函数：返回员工薪资，用于多态
    virtual double calculateSalary() const {
        return baseSalary;
    }

    // 显示员工信息
    virtual void displayInfo() const {
        cout << "员工姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary << endl;
    }

    // 虚析构函数，确保子类对象可以正确析构
    virtual ~Employee() {}
};

// Manager类，继承Employee，体现继承
class Manager : public Employee {
private:
    double bonus;

public:
    Manager(const string& name, int id, double baseSalary, double bonus)
        : Employee(name, id, baseSalary), bonus(bonus) {}

    // 重写薪资计算函数，体现多态
    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayInfo() const override {
        cout << "经理姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary << ", 奖金: " << bonus << endl;
    }
};

// Engineer类，继承Employee，体现继承
class Engineer : public Employee {
private:
    int projects;    // 参与的项目数量
    double projectBonus;  // 每个项目的奖金

public:
    Engineer(const string& name, int id, double baseSalary, int projects, double projectBonus)
        : Employee(name, id, baseSalary), projects(projects), projectBonus(projectBonus) {}

    // 重写薪资计算函数，体现多态
    double calculateSalary() const override {
        return baseSalary + projects * projectBonus;
    }

    void displayInfo() const override {
        cout << "工程师姓名: " << name << ", ID: " << id << ", 基本工资: " << baseSalary 
             << ", 项目数量: " << projects << ", 项目奖金: " << projectBonus << endl;
    }
};

// 演示函数
void showEmployeeInfo(const Employee& emp) {
    emp.displayInfo();
    cout << "总薪资: " << emp.calculateSalary() << endl << endl;
}

int main() {
    // 创建不同的员工对象，体现多态性
    Manager manager("张经理", 1001, 8000, 2000);       // 基本工资8000，奖金2000
    Engineer engineer("李工程师", 1002, 5000, 3, 500);  // 基本工资5000，参与3个项目，每个项目500元奖金

    showEmployeeInfo(manager);     // 多态调用
    showEmployeeInfo(engineer);    // 多态调用

    return 0;
}
