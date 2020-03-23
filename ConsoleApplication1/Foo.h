#pragma once

class Foo
{
public:
    Foo();
    ~Foo();
    int cnt = 0;
    static Foo* make_class();
};
