#include <iostream>

namespace first{
    std::string x = "I am a beautiful string";
}

namespace second{
    int x = 2;
}

int main() {
    int x = 0;

    std::cout << x << '\n';
    std::cout << first::x;
}