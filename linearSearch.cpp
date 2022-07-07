#include <iostream>
#include <vector>

using namespace std;


int linearSearch(int value, vector<int> array){
    for( int i = 0; i < array.size(); i++){
        if (value == array[i]){
            cout << value << " is in position " << i << " of array" << endl;
            return i;
        }
        
    }
    return 0;
}


int main(){
    int value = 58;
    vector<int> array { 31, 41, 59, 26,  58};
    linearSearch(value, array);
}