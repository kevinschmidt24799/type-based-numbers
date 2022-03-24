//
// Created by Kevin Schmidt on 1/3/22.
//

#ifndef NUMBERS_NUMBERS_HPP
#define NUMBERS_NUMBERS_HPP

#include <ostream>

struct Zero
{
    friend std::ostream &operator<<(std::ostream &os, const Zero &z)
    {
        return os << ".";
    }
};

template<typename T>
struct Successor
{
    friend std::ostream &operator<<(std::ostream &os, const Successor &successor)
    {
        return os  << "|" << T{};
    }
};


// sum

template<typename A>
A operator+(A a, Zero z)
{
    return {};
}

template<typename A, typename B>
typeof(Successor<typeof((A{}+B{}))>) operator+(A a, Successor<B> b)
{
    return {};
}

// prod

template<typename A>
Zero operator*(A a, Zero z)
{
    return {};
}

template<typename A, typename B>
typeof(A{}+(A{}*B{})) operator*(A a, Successor<B> b)
{
    return {};
}


//factorial

inline Successor<Zero> factorial(Zero z)
{
    return {};
}

template<typename A>
typeof(factorial(A{})*Successor<A>{}) factorial(Successor<A>)
{
    return {};
}


//template<int n>
//struct Factorial
//{
//    enum { value = n*Factorial<n-1>::value };
//};
//
//template<>
//struct Factorial<0>
//{
//    enum { value = 1 };
//};






#endif //NUMBERS_NUMBERS_HPP
