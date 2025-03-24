#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template <typename T, typename _Sequence=std::deque<T> >
class MutantStack: public std::stack<T>
{
    private:


    public:
        typedef typename MutantStack<T>::container_type::iterator                   iterator;
        typedef typename MutantStack<T>::container_type::const_iterator             const_iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator           revserse_iterator;
        typedef typename MutantStack<T>::container_type::const_reverse_iterator     const_reverse_iterator;

        MutantStack(): std::stack<T>();
        MutantStack( MutantStack &rhs );
        MutantStack                 &MutantStack( MutantStack &rhs );
        ~MutantStack();

        iterator                    begin();
        iterator                    end();
        const_iterator              cbegin() const;
        const_iterator              cend() const;
        revserse_iterator           rbegin();
        revserse_iterator           rend();
        const_reverse_iterator      crbegin();
        const_reverse_iterator      crend();


};

#include "MutantStack.tpp"
#endif