#include <iostream>
#include <vector>
using namespace std;

vector<int> decreaInsertionSort(vector<int> array){
    for ( int j = 1; j < array.size(); j++){
        int currentKey = array[j];
        int i = j - 1;
        while ( i > -1 && array[i] < currentKey){
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1]= currentKey;
    }
    for(int intege : array){
        std::cout << intege << " ";
    }
    return array;
}

int main() {
    vector<int> array{5, 2, 4, 6, 1, 3};
    decreaInsertionSort(array);
}