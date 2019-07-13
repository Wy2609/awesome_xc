#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v{"XC", "is", "extension", "of", "C", "language."};
    for (auto & word : v)
        std::cout << word << " ";
    std::cout << std::endl;
    return 0; 
}