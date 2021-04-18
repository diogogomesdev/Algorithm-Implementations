#include <iostream>

using namespace std;

int arr[10] = {4,2,8,7,5,9,1,3,12,16};

void insertionSort(){
    int hold;

    for(int i=1;i<10;i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
        }
        arr[j+1] = key;
    }

}

int main(){

    insertionSort();

    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
