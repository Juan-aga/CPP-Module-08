#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <iostream>
# include <algorithm>
# include <ctime>

class Span
{

    public:
        Span( unsigned int const & n );
        Span( Span const & span );
        ~Span( void );

        void    addNumber( int const & number );
        int     shortestSpan( void ) const ;
        int     longestSpan( void ) const ;
        void    fillSpan( void );
        void    printSpan( void ) const ;


        class SpanFullException;
        class SpanNotFoundException;

    private:
        unsigned int        _size;
        unsigned int        _maxSize;
        std::vector<int>    _numbers;


        Span( void );

        Span &  operator=( Span const & span );


};



#endif