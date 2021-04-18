#include <iostream>

using namespace std;

int arr[8] = {23,2,6,5,1,76,7,6};

void bubbleSort(){
    int j = 8, hold;
    for(int k=0; k<7; k++){
        for(int i=1; i<j; i++){
            if(arr[i-1] > arr[i]){
                hold = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = hold;
            }
        }
    }
}

int main(){

    bubbleSort();

    for(int i=0;i<8;i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
