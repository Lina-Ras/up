#include <iostream>
#include <windows.h>
#include <vector>
#include "sorting_algorithms.h"
#include "vectorLR.h"
#include "data_generation.h"


extern int number_of_comparisons;
extern int number_of_exchanges;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    std::cout<<"Enter a size of vector n: ";
    std::cin>>n;
    std::vector<int> vec(n), control_vec(n);
    {
        std::cout<< "Would you generate massiv random or enter by hands?\n";
        std::cout<< "0 - increasing random\n";
        std::cout<< "1 - decreasing random\n";
        std::cout<< "2 - random\n";
        int flag;
        std::cin>>flag;
        switch (flag){
            case 0:{
                increasing_random(n, vec);
                copy_vector(n, vec, control_vec);
                break;
            }
            case 1:{
                decreasing_random(n, vec);
                copy_vector(n, vec, control_vec);
                break;
            }
            case 2:{
                random_generation(n, vec);
                copy_vector(n, vec, control_vec);
                break;
            }
            default:{
                std::cout<< "Error: wrong value";
                return 0;
            }
        }
    }

    std::cout<< "0 - Insertion sort\n";
    timer(insertion_sort, n, vec);

    std::cout<< "1 - Shell sort\n";
    timer(shell_sort, n, vec);

    std::cout<< "2 - Bubble sort\n";
    timer(bubble_sort, n, vec);

    std::cout<< "3 - Even and odd sort\n";
    timer(even_odd_sort, n, vec);

    std::cout<< "4 - Coctail sort\n";
    timer(coctail_sort, n, vec);

    std::cout<< "5 - Comb sort\n";
    timer(comb_sort, n, vec);

    return 0;
}
