#include "BubbleSort.h"
#include <vector>
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list){
    int hold=0;
    int size=list.size();
    for (int z=0;z<size-1;z++){
        for (int i=0;i<size-1;i++){
            if (list.at(i)>list.at(i+1)){
                hold=list.at(i);
                list.at(i)=list.at(i+1);
                list.at(i+1)=hold;
                hold=0;
            };
        };
    };
    return list;
};