#pragma once
#include <memory>
#include "Foo.h"

class Bar
{
public:
    std::unique_ptr<Foo> foo = nullptr;
    Foo* foo2 = nullptr;
    Bar();
    ~Bar();
    void set_foo(std::unique_ptr<Foo> foo);
    void set_foo2(Foo* foo);
};

