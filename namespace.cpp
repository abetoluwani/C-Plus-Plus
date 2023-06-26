#include <iostream>

// namespace simply enable you to use a variabke name more than once
namespace first
{
    int x = 2;
} // namespace first

namespace second
{
    int x = 2334;
} // namespace second


int main(){
    int x = 1;

    std::cout << x; //std::cout is also like printf in c
    std::cout << first::x; // this is the way to call a name space
    std::cout << second::x;

}