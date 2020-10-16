#include <iostream>
#include <windows.h>
#include <vector>
#include <chrono>
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

            auto start = std::chrono::system_clock::now();
            insertion_sort(n,vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';



    std::cout<< "1 - Shell sort\n";

            auto start = std::chrono::system_clock::now();
            shell_sort(n,vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';
            copy_vector(n, control_vec, vec);

    std::cout<< "2 - Bubble sort\n";

            auto start = std::chrono::system_clock::now();
            bubble_sort(n,vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';
            copy_vector(n, control_vec, vec);

    std::cout<< "3 - Even and odd sort\n";

            auto start = std::chrono::system_clock::now();
            even_odd_sort(n, vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';
            copy_vector(n, control_vec, vec);

    std::cout<< "4 - Coctail sort\n";

            auto start = std::chrono::system_clock::now();
            coctail_sort(n, vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';
            copy_vector(n, control_vec, vec);

    std::cout<< "5 - Comb sort\n";

            auto start = std::chrono::system_clock::now();
            comb_sort(n, vec);
            auto end = std::chrono::system_clock::now();

            auto elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end - start).count();
            auto elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

            time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Calculations are finished on " << std::ctime(&end_time)
                      << "Algorithm execution time: " << elapsed_seconds << "s\n"
                      << "Algorithm execution time: " << elapsed_milliseconds << "ms\n";

            std::cout << "number_of_exchanges: " << number_of_exchanges << ", number_of_comparisons: " << number_of_comparisons << '\n';
            copy_vector(n, control_vec, vec);
            
    return 0;
}
