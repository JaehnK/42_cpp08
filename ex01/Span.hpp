#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#include <iostream>
#include <list>
#include <deque>
#include <set>
#include <map>

class Span
{
private:
    std::vector<int>                vec;
    
    Span();
public:
    Span( unsigned int N );
    Span( const Span &rhs );
    Span            &operator=( const Span &rhs );
    const int       &operator[](size_t idx) const;
    int             &operator[](size_t idx);
    ~Span();

    size_t          getSize() const;
    size_t          getCapacity() const;

    void            addNumber( int num );

    template <typename T>
    void            addNumbers( T &numbers )
    {
        typename T::iterator it = numbers.begin();
        while (it != numbers.end())
            addNumber(*it++);
    };

    unsigned int    shortestSpan( void ) const;
    unsigned int    longestSpan( void ) const;

    class SpanCapacityException: public std::exception
    {
        public:
            const char * what() const throw();
    };

    class InsufficientElementException: public std::exception
    {
        public:
            const char * what() const throw();
    };

    class InvalidIndexException: public std::exception
    {
        public:
            const char* what() const throw();
    };

};



#endif