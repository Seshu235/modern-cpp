#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = {10, 20, 30, 40};

    std::vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    v.push_back(60);
    v.push_back(70);
    v.push_back(80);

    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

}