#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "data_generation.h"

void increasing_random (int n, std::vector<int> &vec){
    std::cout<< "Enter value of left border: ";
    std::cin>>vec[0];

    srand(time(nullptr));
    int k=rand()%(10-1)+1;
    for (int i=1; i<n; ++i){
        vec[i]=vec[i-1]+k;
    }
    std::cout<<std::endl;
    return;
}

void decreasing_random (int n, std::vector<int> &vec){
    std::cout<< "Enter value of right border: ";
    std::cin>>vec[0];

    srand(time(nullptr));
    int k=rand()%(-1+10)-10;
    for (int i=1; i<n; ++i){
        vec[i]=vec[i-1]+k;
    }
    std::cout<<std::endl;
    return;
}

void random_generation(int n, std::vector<int> &vec){
    int left_border, right_border;
    std::cout<< "Enter value of right border: ";
    std::cin>>right_border;
    std::cout<< "Enter value of left border: ";
    std::cin>>left_border;
    srand(time(nullptr));
    for (int i=0; i<n; ++i){
        vec[i]=rand()%(right_border-left_border)+left_border;
    }
    std::cout<<std::endl;
    return;
}