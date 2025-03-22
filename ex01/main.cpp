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

    try 
    {
        // 충분한 크기의 Span 생성
        Span span(20);
        
        // 1. std::vector 테스트
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);

        std::cout << "Testing with vector..." << std::endl;
        span.addNumbers(vec);
        
        // Span 초기화
        Span span2(20);
        
        // 2. std::list 테스트
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);

        std::cout << "Testing with list..." << std::endl;
        span2.addNumbers(lst);

        
        // Span 초기화
        Span span3(20);
        
        // 3. std::deque 테스트
        std::deque<int> dq;
        dq.push_back(5);
        dq.push_back(15);
        dq.push_back(25);
        dq.push_back(35);
        dq.push_back(45);

        std::cout << "Testing with deque..." << std::endl;
        span3.addNumbers(dq);

        
        // Span 초기화
        Span span4(20);
        
        // 4. std::set 테스트
        std::set<int> s;
        s.insert(1);
        s.insert(4);
        s.insert(19);

        std::cout << "Testing with set..." << std::endl;
        span4.addNumbers(s);

        
        // 예외 테스트: 작은 Span에 큰 컨테이너 추가
        Span smallSpan(3);
        std::cout << "Testing exception with small Span..." << std::endl;
        smallSpan.addNumbers(vec);
        
    } 
    catch (const std::exception& e) 
    {
        std::cerr <<  e.what() << std::endl;
    }
}