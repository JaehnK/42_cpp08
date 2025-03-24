#include "MutatantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(0);
	mstack.push(1);
	std::cout << mstack.top() << std::endl;
	// mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.pop();
	mstack.push(5);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
    std::cout <<"begin " << *it << std::endl;
    std::cout <<"end " << *ite << std::endl;
    
    ++it;
    std::cout <<"++" << *it << std::endl;

	--it;
    std::cout <<"--" << *it << std::endl;

    std::cout << "----" <<std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}