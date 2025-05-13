#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
    std::cout << "Array: ";
    for(int&a : angka){
        std::cout << a << " ";
    }
}

void printArray(std::array <char, arraySize> &huruf){
    std::cout << "Array: ";
    for(char&h : huruf){
        std::cout << h << " ";
    }
}

int main(){
    std::array<int, arraySize> angka = {1, 4, 2, 5, 3, 6, 8, 7, 9, 0};
    std::array<char, arraySize> huruf = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};

    //output array yang belum urut
    printArray(angka);
    std::cout << std::endl;
    printArray(huruf);
    std::cout << std::endl << std::endl;

    //sorting array
    std::sort(angka.begin(), angka.end());
    std::sort(huruf.begin(), huruf.end());
    
    //output array urut
    printArray(angka);
    std::cout << std::endl;
    printArray(huruf);
    return 0;
}