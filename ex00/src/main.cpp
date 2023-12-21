#include "easyfind.hpp"

#include <list>
#include <vector>

int main( void )
{
    std::list<int>      lst;
    std::vector<int>    vec;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            lst.push_back(i);
            vec.push_back(i);
        }
    }

    std::cout << "lst: " ;
    for ( std::list<int>::iterator n = lst.begin(); n != lst.end(); n++)
        std::cout << *n << ", ";
    std::cout << std::endl;

    std::cout << "vec: ";
    for (std::vector<int>::iterator n = vec.begin(); n != vec.end(); n++)
        std::cout << *n << ", ";
    std::cout << std::endl;

    easyfind(lst, 5);
    easyfind(vec, 5);

    easyfind(lst, 0);
    easyfind(vec, 0);

    return 0;
}