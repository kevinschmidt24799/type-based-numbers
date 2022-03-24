#include <iostream>
#include "numbers.hpp"

int main()
{
    Successor<Successor<Successor<Zero>>> three;
    Successor<Successor<Zero>> two;
    Zero zero;

    std::cout << two + three << '\n';
    std::cout << zero + three << '\n';
    std::cout << two + zero << '\n';

    std::cout << two * three << '\n';
    std::cout << zero * three << '\n';
    std::cout << two * zero << '\n';

    std::cout << factorial(zero) << '\n';
    std::cout << factorial(three) << '\n';



    return 0;
}
