#include <iostream>
#include <vector>
#include <string>
#include <memory>   // 包含智能指针头文件
#include <algorithm> // 包含标准算法库

class Student {
public:
    std::string name;
    int age;
    double grade;

    Student(const std::string& name, int age, double grade)
        : name(name), age(age), grade(grade) {}

    void display() const {
        std::cout << "姓名: " << name << ", 年龄: " << age << ", 成绩: " << grade << std::endl;
    }
};

int main() {
    // 使用 shared_ptr 创建多个 Student 对象，并存储到 vector 中
    std::vector<std::shared_ptr<Student>> students = {
        std::make_shared<Student>("张三", 20, 85.5),
        std::make_shared<Student>("李四", 21, 90.0),
        std::make_shared<Student>("王五", 22, 78.0),
        std::make_shared<Student>("赵六", 19, 88.5)
    };

    // 使用 Lambda 表达式显示所有学生信息
    std::cout << "所有学生信息：" << std::endl;
    std::for_each(students.begin(), students.end(), [](const std::shared_ptr<Student>& student) {
        student->display();
    });

    // 使用 Lambda 表达式查找成绩大于85分的学生
    std::cout << "\n成绩大于85的学生：" << std::endl;
    std::for_each(students.begin(), students.end(), [](const std::shared_ptr<Student>& student) {
        if (student->grade > 85.0) {
            student->display();
        }
    });

    // 使用 unique_ptr 创建一个新的学生对象
    std::unique_ptr<Student> newStudent = std::make_unique<Student>("小明", 23, 92.0);
    std::cout << "\n新学生信息：" << std::endl;
    newStudent->display();

    return 0;
}
