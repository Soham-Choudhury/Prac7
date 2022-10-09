#include "RecursiveBinarySearch.h"
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
void print (std::vector<int> list){
    int size=list.size();
    int a;
    for (a=0;a<size;a++){
        if (a==size-1){
            cout<<list.at(a)<<endl;
        }
        else{
            cout<<list.at(a)<<" ";
        }
    };
}
bool RecursiveBinarySearch::search(std::vector<int> list, int x){
    int middle=ceil((list.size()/2));
    int size=list.size();
    std::cout<<"Middle: "<<middle<<std::endl;
    if (list.at(middle)==x){
        //std::cout<<"Option 1"<<std::endl;
        return true;
    }
    if (size<3){
        if (list.at(0)==x || list.at(1)==x){
            //std::cout<<"Option 2.1"<<std::endl;
            return true;
        }
        else if (list.at(0)!=x || list.at(1)!=x){
            //std::cout<<"Option 2.2"<<std::endl;
            return false;
        }
    }
    if (list.at(middle)>x){
        //std::cout<<"Option 3"<<std::endl;
        list.erase(list.begin()+middle+1,list.end());
        //print (list);
        return search(list,x);
    }
    else if (list.at(middle)<x){
        //std::cout<<"Option 4"<<std::endl;
        list.erase(list.begin(),list.begin()+middle+1);
        //print (list);
        return search(list,x);
    }
    return 0;
};
