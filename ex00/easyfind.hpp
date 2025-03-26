#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue> 


template <typename T>
void    easyfind(T &container, int value)
{
    typename T::iterator    it;

    it = std::find(container.begin(), container.end(), value);
    
    if (it == container.end())
        std::cerr << "Failed to Find value" << std::endl;
    else
        std::cout << *it << std::endl;
    
    return ;
}

#endif