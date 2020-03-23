#include <iostream>
#include "Foo.h"

Foo::Foo()
{
    std::cout << "Foo init!" << std::endl;
}

Foo::~Foo()
{
    std::cout << "Foo del" << std::endl;
}

Foo* Foo::make_class()
{
    return new Foo();
}
