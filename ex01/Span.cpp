#include "Span.hpp"

Span::Span()
{}

Span::Span( unsigned int N )
{
    vec.reserve(N);
}

Span::Span( const Span &rhs )
{
    *this = rhs;
}

Span::~Span()
{
}

Span    &Span::operator=( const Span &rhs )
{
    if (this != &rhs)
    {
        this->vec.resize(rhs.getCapacity());
        for (size_t i = 0; i < rhs.getSize(); i++)
            this->vec.push_back(rhs[i]);
    }
    return (*this);
}

size_t  Span::getSize() const
{
    return (this->vec.size());
}

size_t  Span::getCapacity() const
{
    return (this->vec.capacity());
}

const int     &Span::operator[]( size_t idx ) const
{
    if (static_cast<size_t>(idx) < this->getSize())
        return ( *( this->vec.begin() + idx ) );
    else
        throw InvalidIndexException();
}

int     &Span::operator[]( size_t idx )
{
    if (static_cast<size_t>(idx) < this->getSize())
        return ( *( this->vec.begin() + idx ) );
    else
        throw InvalidIndexException();
}

void    Span::addNumber(int value)
{
    if (this->getSize() < this->vec.capacity())
        this->vec.push_back(value);
    else
        throw SpanCapacityException();
}

unsigned int    Span::shortestSpan( void ) const
{
    unsigned int              min;
    unsigned int              temp;
    std::vector<int>          sorted;

    if (this->getSize() < 2)
        throw InsufficientElementException();
    
    min = UINT_MAX;
    sorted = this->vec;
    std::sort(sorted.begin(), sorted.end());
    for (size_t i = 1; i < sorted.size(); i++)
    {
        temp = sorted[i] - sorted[i - 1];
        if (temp < min)
            min = temp;
    }
    return (min);
}

unsigned int Span::longestSpan( void ) const
{
    if (this->getSize() < 2)
        throw InsufficientElementException();

    int maxVal = *std::max_element(this->vec.begin(), this->vec.end());
    int minVal = *std::min_element(this->vec.begin(), this->vec.end());
    
    return(maxVal - minVal);
}

const char *Span::SpanCapacityException::what() const throw()
{
    return "Capacity exceeded: Cannot add more elements to the Span.";
}

const char *Span::InsufficientElementException::what() const throw()
{
    return "Insufficient elements: At least 2 elements are required in the Span.";
}

const char *Span::InvalidIndexException::what() const throw()
{
    return "Index out of bounds: The specified index is outside the valid range.";
}