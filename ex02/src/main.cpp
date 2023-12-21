#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\n\n";

    std::list<int> test_stack;
    test_stack.push_back(5);
    test_stack.push_back(17);
    std::cout << test_stack.back() << std::endl;
    test_stack.pop_back();
    std::cout << test_stack.size() << std::endl;
    test_stack.push_back(3);
    test_stack.push_back(5);
    test_stack.push_back(737);
    //[...]
    test_stack.push_back(0);
    std::list<int>::iterator itt = test_stack.begin();
    std::list<int>::iterator itet = test_stack.end();
    ++itt;
    --itt;
    while (itt != itet)
    {
    std::cout << *itt << std::endl;
    ++itt;
    }

    return 0;
}