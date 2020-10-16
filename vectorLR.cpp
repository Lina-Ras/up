#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "vectorLR.h"

void enter_vector(int n, std::vector<int> &vec){
    std::cout<<"Enter vector:";
    for (int i=0; i<n; ++i){
        std::cin>>vec[i];
    }
    return;
}

void print_vector(int n, std::vector<int> &vec){
    for (int i=0; i<n; ++i){
        std::cout<<std::setw(5)<<vec[i]<< "  ";
        if((i+1)%10==0){
            std::cout << std::endl;
        }
    }
    std::cout<<std::endl;
    return;
}

void copy_vector(int n, std::vector<int> &vec,std::vector<int> &copy_of_vec){
    for (int i=0; i<n; ++i){
        copy_of_vec[i]=vec[i];
    }
    return;
}