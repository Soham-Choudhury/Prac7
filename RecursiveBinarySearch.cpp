#include "RecursiveBinarySearch.h"
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
void print (std::vector<int> list){ //function to print values in array for diagnostics cases
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
    std::vector<int> values=list;
    int middle=ceil((values.size()/2));
    int size=values.size();
    //std::cout<<"Middle: "<<middle<<std::endl;
    if (values.at(middle)==x){ //if value is found in middle of list
        //std::cout<<"Option 1"<<std::endl;
        return true;
    }
    if (size<3){
        if (values.front()==x || values.back()==x){ //if value is in vector of size 2
            //std::cout<<"Option 2.1"<<std::endl;
            return true;
        }
        else { //if it is not in the vector of size 2
            //std::cout<<"Option 2.2"<<std::endl;
            return false;
        }
    }
    if (values.at(middle)>x){ //if value is to the left of the middle of list
        //std::cout<<"Option 3"<<std::endl;
        values.erase(values.begin()+middle+1,values.end()); //erase values in list to the right of the middle
        //print (values);
        return search(values,x);
    }
    else if (values.at(middle)<x){ //if value is to the right of the middle of list
        //std::cout<<"Option 4"<<std::endl;
        values.erase(values.begin(),values.begin()+middle+1); //erase values in list to the left of the middle
        //print (values);
        return search(values,x);
    }
    return 0;
};