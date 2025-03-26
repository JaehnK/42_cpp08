#include "Span.hpp"

void    tryAddNumber(int i, Span &s)
{
    try
    {
        s.addNumber(i);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    tryLongestSpan(Span &s)
{
    try
    {
        std::cout << "Longest Span: " << s.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    tryShortestSpan(Span &s)
{
    try
    {
        std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    try
    {
        Span arr(10);

        tryLongestSpan(arr);
        tryShortestSpan(arr);

        for (int i = 0; i < 10; i++)
        {
            tryAddNumber(i * 20, arr);
            std::cout << arr[i] << std::endl;
        }   
        tryLongestSpan(arr);
        tryShortestSpan(arr);
        tryAddNumber(123, arr);
    }
    catch (const std::exception& e) 
    {
        std::cerr <<  e.what() << std::endl;
    }

    try 
    {
        Span              span(2);
        std::vector<int>  v;

        v.reserve(3);

        for (int i = 0; i < 3; i++)
            v.push_back(i * 2);
        
        span.addNumbers(v);
        for (size_t i = 0; i < span.getSize(); i++)
            std::cout << i << " : " << v[i] << std::endl;
    } 
    catch (const std::exception& e) 
    {
        std::cerr <<  e.what() << std::endl;
    }

    try 
    {
        Span              span(10);
        std::vector<int>  v;

        v.reserve(3);

        for (int i = 1; i < 4; i++)
            v.push_back(i * 2);
        
        span.addNumbers(v);
        for (size_t i = 0; i < span.getSize(); i++)
            std::cout << i << " : " << v[i] << std::endl;

    } 
    catch (const std::exception& e) 
    {
        std::cerr <<  e.what() << std::endl;
    }

}