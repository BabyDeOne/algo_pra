#include <vector>
#include <iostream>
using namespace std;

vector<int> insertionSort(vector<int> array){
    for(int j = 1; j < array.size(); j++){
        int currentKey = array[j];
        int i = j - 1;
        while(i > -1 && array[i] > currentKey){
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = currentKey;
    }
    return array;
}

int main() {
    vector<int> array{31,41, 59, 26, 41, 58};
   vector<int> result =  insertionSort(array);
    for (int i : result){
        std::cout << i << " ";
    }
}