#include <iostream>

using namespace std;

int main() {
    const int arrSize = 7;  
    int sourceArr[arrSize] = { 1, 2, 3, 4, 5, 6, 7};  
    int destinationArr[arrSize]; 

   
    int* sourcePtr = sourceArr;
    int* destinationPtr = destinationArr;

   
    for (int i = 0; i < arrSize; ++i) {
        *destinationPtr = *sourcePtr;  
        
        ++sourcePtr;  
        ++destinationPtr;  
    }


   cout << "Output array: ";
    for (int i = 0; i < arrSize; ++i) {
      cout << sourceArr[i] << " ";
    }

    cout << "\nCopied array: ";
    for (int i = 0; i < arrSize; ++i) {
        cout << destinationArr[i] << " ";
    }

    cout << endl;

    return 0;
}
