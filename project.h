#include <iostream>
#include <cstdlib>
#include "math.h"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <set>
#ifndef PROJECT_H
#define PROJECT_H
using namespace std;


class project
{
    public:
        project();
        virtual ~project();
        void multiples_of_3_and_5();
        void even_fibonacce();
        void largest_prime_factor();
        void largest_palindrome_product();
        void smallest_multiple();
        void sum_square_diff();
        void tenthousandst_prime();
        void largest_product_in_series();
        void special_pytho_triplet();
        void summation_of_primes();
        void largest_product_in_grid();
        void highly_divisible_triangular_number();
            int number_divisors(int number);
        void large_sum();
            int charToInt(char line);
        void longest_collatz_sequence();
            int collatz_func(long long num);
        void diophantine_reciprocals_a();
            void seive(int n);
        void power_digit_sum();
        void number_letter_counts();
        void maximum_path_sum_I();
            int maxsum (int num1, int num2, int up);
            int path(int num, int tri[][15]);
        void counting_sundays();
            void setStartDate(int startDay, int startMonth, int startYear);
            bool isLeapYear();
            int daysInMonth();
            void updateDate(int numDays);
            int sundaysOnFirst(int endYear);
        void factorial_digit_sum();
            int sumDigits(string s);
        void name_scores();
    protected:
    private:
};

#endif // PROJECT_H
