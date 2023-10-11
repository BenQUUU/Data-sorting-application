#ifndef SORTBASE_HPP
#define SORTBASE_HPP

#include <vector>
#include <string>

template<class T>
class SortBase{
public:
    virtual void sort(std::vector<T>& arr) = 0;
    virtual std::string getName() const = 0;
};


#endif