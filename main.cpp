#include <iostream>
#include <string>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;


int main (){
    vector<int> list; //vector to hold integer input list
    //cout<<"Enter list:"<<endl;
    std::string input=""; //variable to hold input as string
    getline (cin >> ws,input); //taking input including spaces
    //input="5 8 4 9 2 7 6";
    //input="0 3 5 1 -5 100 7777 2014";
    //input="0 3 5 4 -5 100 7777 2014";
    string target=" "; //variable holding the target to aim for the space to differentiate between different ints
    string hold=""; //variable and temp hold space
    int targetfound=0; // hold location of first area with comma, hence end of first int
    int sizeofin=input.size(); //size of input string

    for (int z=0; z<sizeofin;z++){ //taking input line and putting integers in vector
        targetfound=input.find(target); // finding location of first space
        if (targetfound==-1){
            hold=input.substr(0,input.size());
            list.push_back(stoi(hold));
            input.erase(0,input.size());
            break;
        }
        else if (targetfound!= -1){
            hold=input.substr(0,targetfound); // taking out first int out of string input
            list.push_back(stoi(hold)); //converting input number from string to integer and holding in vector values
            input.erase(0,targetfound+1); //erasing first int and space in input string
        }
    };
    BubbleSort bubblesort;
    std::vector<int> bubblelist=bubblesort.sort(list); //sort using bubble sort
    int size=bubblelist.size();
    //for (int x=0;x<size;x++){
    //    if (x==size-1){
    //        cout<<bubblelist.at(x)<<endl;
    //    }
    //    else{
    //        cout<<bubblelist.at(x)<<" ";
    //    }
    //};

    
    
    
    QuickSort quicksort;
    std::vector<int> quicklist=quicksort.sort(list); //sort using quicksort
    //cout<<"Quicklist: ";
    //for (int a=0;a<size;a++){
    //    if (a==size-1){
    //        cout<<quicklist.at(a)<<endl;
    //    }
    //    else{
    //        cout<<quicklist.at(a)<<" ";
    //    }
    //};

    RecursiveBinarySearch searchlist;
    //cout<<"Enter value to search: "<<endl;
    int n=1;
    //cin>>n;
    //cout<<n<<endl;
    //bool value=0;
    bool value=searchlist.search(bubblelist, n); //search for value n in list of integers
    if (value==1){ //if value is found, output true, vice versa
        cout<<"true ";
    }
    else {
        cout<<"false ";
    }

    for (int a=0;a<size;a++){ //printing values of sorted list
        if (a==size-1){
            cout<<bubblelist.at(a)<<endl;
        }
        else{
            cout<<bubblelist.at(a)<<" ";
        }
    };



    
return 0;
};