#include <iostream>

void log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    log("hello world");
    std::cin.get();
}
