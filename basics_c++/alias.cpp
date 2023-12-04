/*
In C++, an alias is like a nickname for something. 
It's a way to give a shorter or easier name to something that might have a longer or trickier name. 
So, instead of always saying the long name, we can use the alias, which is like a friendly shortcut. 
It helps us talk about things in a simpler way.
*/

#include <iostream>

/*
typedef has been replaced with using because it works better with templates??
think of typedef as making your type
*/
//typedef std::string text_t;

using text_t = std::string;

int main() {
    text_t firstName = "Gengen OP";

    std::cout << firstName;

    return 0;
}
