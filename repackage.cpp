#include <iostream>
// #include <list>

namespace mystl {
    template<class T>
    using list = std::list<T>;
};

int main()
{
    mystl::list<int> mlist;

    mlist.push_back(0);
    
    for (auto a : mlist)
        std::cout << a << std::endl;
}
