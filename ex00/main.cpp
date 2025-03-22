#include "easyfind.hpp"

int main(void)
{
    {
        std::cout << "===vector test===" << std::endl;
        std::vector<int>    vec;
        
        for (int i = 0; i < 5; i++)
            vec.push_back( i );
        
        easyfind(vec, 0);
        easyfind(vec, 5);
    }
    {
        std::cout << "\n===list test===" << std::endl;
        std::list<int>      lst;

        for (int i = 0; i < 5; i++)
            lst.push_back( i );
        
        easyfind(lst, 1);
        easyfind(lst, 5);
    }
    {
        std::cout << "\n===deque test===" << std::endl;
        std::deque<int>     deq;
    
        for (int i = 0; i < 5; i++)
            deq.push_back( i );
        
        easyfind(deq, 2);
        easyfind(deq, 5);
    }
    {
        std::cout << "\n===set test===" << std::endl;
        std::set<int> intSet;

        for(int i = 0; i < 5; i++)
            intSet.insert( i );
        
        easyfind(intSet, 3);
        easyfind(intSet, 5);
    }
    {
        std::cout << "\n===empty test===" << std::endl;
        std::list<int> lst;

        easyfind(lst, 10);
    }
    {
        // easyfind(NULL, 10);
        // easyfind(arr, 2147483648);
    }
    
    return (0);
}