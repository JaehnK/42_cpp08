#include "MutantStack.hpp"

template < typename T, typename _Sequence >
MutantStack<T, _Sequence>::MutantStack():std::stack<T>()
{}

template < typename T, typename _Sequence >
MutantStack<T, _Sequence>::MutantStack( MutantStack &rhs )
{
    *this = rhs;
}

template < typename T, typename _Sequence >
MutantStack<T, _Sequence>   &MutantStack<T, _Sequence>::operator=
                            ( const MutantStack<T, _Sequence> &rhs )
{
    if (*this != rhs)
    {
        std::stack<T>::operator=(rhs);
    }
    return *this;
}

template < typename T, typename _Sequence >
MutantStack<T, _Sequence>::~MutantStack()
{}

template < typename T, typename _Sequence >
typename MutantStack<T>::container_type::iterator
                            MutantStack<T, _Sequence>::begin()
{
    return this->c.begin();
}

template < typename T, typename _Sequence >
typename MutantStack<T>::container_type::iterator
                            MutantStack<T, _Sequence>::end()
{
    return this->c.end();
}

template < typename T, typename _Sequence >
typename MutantStack<T>::container_type::const_iterator
                            MutantStack<T, _Sequence>::cbegin() const
{
    return this->c.begin();
}

template < typename T, typename _Sequence >
typename MutantStack<T>::container_type::const_iterator
                            MutantStack<T, _Sequence>::cend() const
{
    return this->c.end();
}
