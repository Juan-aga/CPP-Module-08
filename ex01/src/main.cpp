#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "sp: ";
    sp.printSpan();
    std::cout << sp.shortestSpan() << std::endl;
    sp.printSpan();
    std::cout << sp.longestSpan() << std::endl;

    Span test(50000);
    test.fillSpan();
    std::cout << "test: ";
    test.printSpan();
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
    return 0;
}
