#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = {1, 2, 3};

    std::vector<int>::iterator it;
    std::cout << "Using iterator for insert...\n";
    for (it = v.begin(); it != v.end(); it++) {
        if (it == v.begin())
            it = v.insert(it, 5);
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Using iterator for delete...\n";
    for (it = v.begin(); it != v.end(); it++) {
        if (it == v.begin())
            it = v.erase(it);
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::vector<int>::reverse_iterator rt;    
    std::cout << "Using reverse_iterator...\n";
    for (rt = v.rbegin(); rt != v.rend(); rt++) {
        std::cout << *rt << " ";
    }
    std::cout << std::endl;

    std::vector<int>::const_iterator it1;
    std::cout << "Using const_iterator...\n";
    for (it1 = v.cbegin(); it1 != v.cend(); it1++) {
        std::cout << *it1 << " ";
    }
    std::cout << std::endl;

    std::vector<int>::const_reverse_iterator rt1;
    std::cout << "Using const_reverse_iterator...\n";
    for (rt1 = v.crbegin(); rt1 != v.crend(); rt1++) {
        std::cout << *rt1 << " ";
    }
    std::cout << std::endl;
    
    return 0;
}