#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    // 1. 使用 vector
    cout << "1. vector 示例:" << endl;
    vector<int> vec = {1, 2, 3, 4, 5};

    // 添加元素
    vec.push_back(6);

    // 遍历并输出
    cout << "vector 内容: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // 查找元素
    auto it = find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        cout << "找到元素 3" << endl;
    }

    // 删除元素
    vec.erase(remove(vec.begin(), vec.end(), 2), vec.end());

    cout << "删除元素2后，vector 内容: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    // 2. 使用 set
    cout << "\n2. set 示例:" << endl;
    set<int> mySet = {10, 20, 30, 40};

    // 插入元素
    mySet.insert(50);

    // 遍历并输出
    cout << "set 内容: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    // 查找元素
    if (mySet.find(20) != mySet.end()) {
        cout << "set中找到元素 20" << endl;
    }

    // 删除元素
    mySet.erase(30);
    cout << "删除元素30后，set 内容: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    // 3. 使用 map
    cout << "\n3. map 示例:" << endl;
    map<string, int> myMap;
    myMap["apple"] = 3;
    myMap["banana"] = 5;
    myMap["cherry"] = 7;

    // 遍历并输出
    cout << "map 内容: ";
    for (const auto &pair : myMap) {
        cout << "[" << pair.first << ": " << pair.second << "] ";
    }
    cout << endl;

    // 查找键值
    if (myMap.find("banana") != myMap.end()) {
        cout << "map中找到键 'banana' 对应的值: " << myMap["banana"] << endl;
    }

    // 删除键值对
    myMap.erase("apple");
    cout << "删除键'apple'后，map 内容: ";
    for (const auto &pair : myMap) {
        cout << "[" << pair.first << ": " << pair.second << "] ";
    }
    cout << endl;

    // 4. 使用 STL 算法 - 排序
    cout << "\n4. STL 算法示例 - 排序:" << endl;
    vector<int> vec2 = {5, 1, 4, 2, 3};

    cout << "排序前: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    sort(vec2.begin(), vec2.end());

    cout << "排序后: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
