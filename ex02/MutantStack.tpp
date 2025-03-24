#include "MutantStack.hpp"

MutantStack::MutantStack()
{}

MutantStack::MutantStack( MutantStack &rhs )
{
    *this = rhs;
}

MutantStack     &MutantStack::MutantStack( MutantStack &rhs )
{
    if (*this != rhs)
    {
        std::stack<T>::operator=(rhs);
    }
    return *this;
}

MutantStack::~MutantStack()
{}

iterator    MutantStack::begin()
{
    return this->c.begin();
}

iterator    MutantStack::end()
{
    return this->c.begin();
}

const_iterator    MutantStack::cbegin() const
{
    return this->c.begin();
}

const_iterator    MutantStack::cend() const
{
    return this->c.begin();
}

const_iterator    MutantStack::cbegin() const
{
    return this->c.begin();
}