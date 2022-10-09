#include "QuickSort.h"
#include <vector>
#include <iostream>
using namespace std;

std::vector<int> QuickSort::sort2(std::vector<int> list){
    //int pivot;
    int i;
    int j;
    int pivot,pivotloc;
    int hold;
    int size=list.size();

    if (size>2){
        pivotloc=2;
    }
    else{
        pivotloc=0;
    }
    pivot=list.at(pivotloc);
    cout<<"Pivot is: "<<pivot<<endl;
    for (i=0;i<size;i++){
        if (list.at(i)>pivot){
            for (j=size-1;j<1;j--){
                if (list.at(j)<pivot){
                    hold=list.at(i);
                    list.at(i)=list.at(j);
                    list.at(j)=hold;
                    hold=0;
                }
                if (j<i){
                    hold=list.at(j);
                    list.at(j)=list.at(pivotloc);
                    list.at(pivotloc)=hold;
                    hold=0;
                }
            };
        }
    };



return list;
};