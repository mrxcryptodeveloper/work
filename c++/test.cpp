
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <bitset>
#include <string_view>


void change(std::string_view a)
{
    a="omid";

}
int main()

{

    std::string_view name = "reza";
    name ="oooo";
    change(name);
    std::cout << name;
    std::cout << "\nend\n";
    return 0;
}


