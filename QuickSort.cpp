#include "QuickSort.h"
#include <vector>
#include <iostream>
using namespace std;

std::vector<int> QuickSort::sort(std::vector<int> list){
    int i;
    int pivot,pivotloc;
    int hold;
    int size=list.size();
    //std::list<int> less,greater;
    if (size>2){
        pivotloc=2;
    }
    else{
        pivotloc=0;
    }
    pivot=list.at(pivotloc);
    //cout<<"Pivot: "<<pivot<<endl;
    for (i=0;i<size;i++){
        if (list.at(i)<pivot && pivotloc<i){
            hold=list.at(i);
            list.at(i)=list.at(pivotloc);
            list.at(pivotloc)=hold;
            pivotloc=i;
            hold=0;
        };
        //cout<<"Quicklist: ";
        //for (int a=0;a<size;a++){
        //    if (a==size-1){
        //        cout<<list.at(a)<<endl;
        //    }
        //    else{
        //        cout<<list.at(a)<<" ";
        //    }
        
    };
   
    return list;
};