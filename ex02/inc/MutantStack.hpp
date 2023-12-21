#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>

template < typename T >
class MutantStack: public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;

        MutantStack( void ) {};
        MutantStack( MutantStack const & mutant )
            {this->c = mutant.c;};
        ~MutantStack( void ) {};

        MutantStack &   operator=( MutantStack const & mutant )
            {this->c = mutant.c;
            return *this;};

        iterator        begin( void )
            {return std::stack<T>::c.begin();};
        iterator        end( void )
            {return std::stack<T>::c.end();};
};

#endif