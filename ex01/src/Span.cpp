#include "Span.hpp"

class Span::SpanFullException: public std::exception
{
    virtual const char * what() const throw()
    {
        return "Span is full, can't add more numbers.";
    }
};

class Span::SpanNotFoundException: public std::exception
{
    virtual const char * what() const throw()
    {
        return "Span not found, must be almost 2 numbers.";
    }
};


Span::Span( void ): _size(0), _maxSize(0)
{

}

Span::Span( unsigned int const & n ): _size(0), _maxSize(n)
{

}

Span::Span( Span const & span ): _size(span._size), _maxSize(span._maxSize), _numbers(span._numbers)
{

}

Span::~Span( void )
{

}

Span &      Span::operator=( Span const & span )
{
    if (this != &span)
    {
        _size = span._size;
        _maxSize = span._maxSize;
        _numbers = span._numbers;
    }
    return *this;
}

void        Span::addNumber( int const & number )
{
    if (_size >= _maxSize)
        throw SpanFullException();
    else
    {
        _numbers.push_back(number);
        _size++;
    }
}

int     Span::shortestSpan( void ) const
{
    std::vector<int>            copy;
    int                         distance;
    std::vector<int>::iterator  start;
    int                         compare;

    if (_size <= 1)
        throw SpanNotFoundException();
    else
    {
        copy = _numbers;
        std::sort(copy.begin(), copy.end());
        start = copy.begin();
        distance = *(start + 1) - *start;
        for (; start != copy.end() - 1; start++)
        {
            compare = *(start + 1) - *start;
            if (compare < distance)
                distance = compare;
            if (distance == 0)
                break;
        }
        return distance;
    }
}

int     Span::longestSpan( void ) const
{
    int min;
    int max;

    if (_size <= 1)
        throw SpanNotFoundException();
    else
    {
        min = *std::min_element(_numbers.begin(), _numbers.end());
        max = *std::max_element(_numbers.begin(), _numbers.end());
        return max - min;
    }
}

void    Span::fillSpan( void )
{
    std::srand(std::time(NULL));
    _numbers = std::vector<int>(_maxSize, 0);
    std::generate(_numbers.begin(), _numbers.end(), rand);
    _size = _maxSize;
}

void    Span::printSpan( void ) const
{
    for (int i = 0; i < static_cast<int>(_size); i++)
        std::cout << _numbers[i] << ", ";
    std::cout << std::endl;
}