#include <iostream>
#include <cstdlib>
#include "project.h"
using namespace std;

const string Problems[] =
    {
        "multiples of 3 and 5",
        "even fibbonacci",
        "largest prime factor",
        "largest palindrome product",
        "smallest multiple",
        "sum square difference",
        "10,001st prime number",
        "largest product in series",
        "special pythagorean triplet",
        "summation of primes",
        "Largest Product in a Grid",
        "Highly divisible triangular number",
        "Large sum",
        "Longest Collatz sequence",
        "Diophantine reciprocals",
        "Power digit sum",
        "Number letter counts",
        "Maximum path sum I",
        "Counting Sundays",
        "Factorial digit sum",
        "EXIT"
    };
const int NUM_PROBLEMS=20;
const int EXIT = NUM_PROBLEMS+1;

int main()
{
    bool done = false;
    int i=0, ch=0;
    project proj;

    while(done==false)
    {
        system("cls");
        for(i=0;i<(NUM_PROBLEMS+1);i++)
            cout<<(i+1)<<"."<<Problems[i]<<endl;

        cout<<"choose problem: ";
        cin>>ch;

        switch(ch){
            case 1:
                proj.multiples_of_3_and_5();
                break;
            case 2:
                proj.even_fibonacce();
                break;
            case 3:
                proj.largest_prime_factor();
                break;
            case 4:
                proj.largest_palindrome_product();
                break;
            case 5:
                proj.smallest_multiple();
                break;
            case 6:
                proj.sum_square_diff();
                break;
            case 7:
                proj.tenthousandst_prime();
                break;
            case 8:
                proj.largest_product_in_series();
                break;
            case 9:
                proj.special_pytho_triplet();
                break;
            case 10:
                proj.summation_of_primes();
                break;
            case 11:
                proj.largest_product_in_grid();
                break;
            case 12:
                proj.highly_divisible_triangular_number();
                break;
            case 13:
                proj.large_sum();
                break;
            case 14:
                proj.longest_collatz_sequence();
                break;
            case 15:
                proj.diophantine_reciprocals_a();
                break;
            case 16:
                proj.power_digit_sum();
                break;
            case 17:
                proj.number_letter_counts();
                break;
            case 18:
                proj.maximum_path_sum_I();
                break;
            case 19:
                proj.counting_sundays();
                break;
            case 20:
                proj.factorial_digit_sum();
                break;
            case EXIT:
                done=true;
                break;
        }
        system("pause");
}; //end of while
}
