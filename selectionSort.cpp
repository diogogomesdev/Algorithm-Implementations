#include <iostream>

using namespace std;

int arr[8] = {23,2,6,5,1,76,7,6};

void selectionSort(){

    int pos_min, hold;

    for(int i=0;i<7;i++){
        pos_min = i;
        for(int j=i+1;j<8;j++){
            if(arr[j] < arr[pos_min]) pos_min = j;
        }
        hold = arr[i];
        arr[i] = arr[pos_min];
        arr[pos_min] = hold;
    }

}

int main(){

    selectionSort();

    for(int i=0;i<8;i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
