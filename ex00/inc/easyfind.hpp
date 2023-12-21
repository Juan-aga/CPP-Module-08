#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <algorithm>

template< typename T >
int easyfind( T & container, int search )
{
    typename T::iterator pos;

    pos = find(container.begin(), container.end(), search);
    if (DEBUG)
        std::cout << "pos: " << *pos << " begin: " << *container.begin() << " end: " << *container.end() << " back: "<< container.back() <<"\n";
    if (pos == container.end())
        std::cout << search << " don't found.\n";
    else
        std::cout << "pos is: " << *pos << std::endl;
    return *pos;
}

#endif