#ifndef QUICKSORT
#define QUICKSORT
#include "Sort.h"

class QuickSort : public Sort {
    public:
    virtual std::vector<int> sort(std::vector<int> list);
    //virtual std::vector<int> sort2(std::vector<int> list);
};

#endif 