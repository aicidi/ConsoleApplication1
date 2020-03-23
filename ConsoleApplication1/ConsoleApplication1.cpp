#include <iostream>
#include <memory>
#include "Foo.h"
#include "Bar.h"

void add(Foo* foo)
{
    foo->cnt++;
}

int main()
{
    auto foo = std::make_unique<Foo>();
    add(foo.get());

    std::cout << foo->cnt << std::endl;

    auto bar = std::make_unique<Bar>();
    bar->set_foo(std::move(foo));

    std::cout << bar->foo->cnt << std::endl;

    add(bar->foo.get());
    std::cout << bar->foo->cnt << std::endl;

    return 0;
}

//int main()
//{
//    Foo* foo2 = Foo::make_class();
//    add(foo2);
//    std::cout << foo2->cnt << std::endl;
//
//    Bar* bar = new Bar();
//    bar->set_foo2(foo2);
//    std::cout << foo2->cnt << std::endl;
//    add(bar->foo2);
//    std::cout << foo2->cnt << std::endl;
//
//    // delete bar->foo2;
//    delete bar;
//    delete foo2;
//}