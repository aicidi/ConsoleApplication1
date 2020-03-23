#include <iostream>
#include "Bar.h"

Bar::Bar()
{
    std::cout << "Bar init" << std::endl;
}

Bar::~Bar()
{
    std::cout << "Bar del" << std::endl;
}

void Bar::set_foo(std::unique_ptr<Foo> foo)
{
    this->foo = std::move(foo);
}

void Bar::set_foo2(Foo* foo)
{
    this->foo2 = foo;
}
