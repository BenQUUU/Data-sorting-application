#ifndef SORTBASE_HPP
#define SORTBASE_HPP

#include <string>
#include <vector>

template <class T>
class SortBase {
public:
    virtual void sort(std::vector<T>& arr) = 0;
    virtual std::string getName() const = 0;
    virtual ~SortBase() = default;
};

#endif