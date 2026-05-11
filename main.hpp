#ifndef MAIN_HPP
#define MAIN_HPP

// Array insertion / deletion in a sorted array

#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int[], int &, int);
void deleteone(int[], int &, int);
void printout(int[], int);

void insertone(int numbers[], int &N, int value)
{
    // Find insertion position
    int pos = 0;
    while (pos < N && numbers[pos] < value) {
        pos++;
    }

    // Shift elements right to make space
    for (int i = N; i > pos; i--) {
        numbers[i] = numbers[i - 1];
    }

    // Insert value and update size
    numbers[pos] = value;
    N++;
}


void deleteone(int numbers[], int &N, int value)
{
    // Find one instance of value
    int pos = -1;
    for (int i = 0; i < N; i++) {
        if (numbers[i] == value) {
            pos = i;
            break;
        }
    }

    // If found, shift left to delete it
    if (pos != -1) {
        for (int i = pos; i < N - 1; i++) {
            numbers[i] = numbers[i + 1];
        }
        N--;
    }
}


void printout(int number[], int last)
{
    for (int i = 0; i < last; i++)
        cout << setw(5) << number[i];
    cout << endl;
}

#endif
