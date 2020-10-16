#include <iostream>
#include <vector>

int number_of_comparisons;
int number_of_exchanges;

void insertion_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    for (int i=0; i < (n-1); i++){
        int j=i+1;
        int k=i;
        while ((vec[j]<vec[k])&&(k>=0)){
            number_of_comparisons++;
            number_of_exchanges++;
            std::swap(vec[j], vec[k]);
            k--;
            j--;
        }
    }

    return;
}

void shell_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    for(int temp=n/2; temp>=1; temp=(int)temp/2){
        for (int i=0; i < (n-temp); i+=temp){
            int j=i+temp;
            int k=i;
            while ((vec[j] < vec[k]) && (k >= 0)) {
                number_of_comparisons++;
                number_of_exchanges++;
                std::swap(vec[j], vec[k]);
                k--;
                j--;
            }
        }
    }
    return;
}

void bubble_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    for(int i=0; i < (n-1); i++){
        for(int j=0; j < (n-1-i) ;j++){
            number_of_comparisons++;
            if(vec[j]>vec[j+1]){
                number_of_exchanges++;
                std::swap(vec[j], vec[j+1]);
            }
        }
    }
    return;
}

void even_odd_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    bool flag(false);
    while(!flag){
        flag = true;
        for(int i=0;i<(n-1); i+=2) {
            number_of_comparisons++;
            if (vec[i] > vec[i + 1]) {
                number_of_exchanges++;
                std::swap(vec[i], vec[i + 1]);
                flag=false;
            }
        }
        for(int i=1;i<(n-1); i+=2) {
            number_of_comparisons++;
            if (vec[i] > vec[i + 1]) {
                number_of_exchanges++;
                std::swap(vec[i], vec[i + 1]);
                flag=false;
            }
        }
    }
    return;
}

void coctail_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    int rb=n-1, lb=0;
    for(int i=0; i < (n-1); i++){
        if((i+1)%2==1) {
            for (int j = lb; j < rb; j++) {
                number_of_comparisons++;
                if (vec[j] > vec[j + 1]) {
                    number_of_exchanges++;
                    std::swap(vec[j], vec[j + 1]);
                }
            }
            rb--;
        }
        else {
            for (int k = rb; k > lb; k--) {
                number_of_comparisons++;
                if (vec[k] < vec[k - 1]) {
                    number_of_exchanges++;
                    std::swap(vec[k], vec[k - 1]);
                }
            }
            lb++;
        }
    }
    return;
}

void comb_sort (int n, std::vector<int> &vec){
    number_of_comparisons = 0;
    number_of_exchanges = 0;
    for(int k=(int)n/2; k>=1; int(k/=2)) {
        for (int i = 0; i < (n - 1); i++) {
            for (int j = 0; (j+k) < n; j++) {
                number_of_comparisons++;
                if (vec[j] > vec[j + k]) {
                    number_of_exchanges++;
                    std::swap(vec[j], vec[j + k]);
                }
            }
        }
    }
    return;
}

