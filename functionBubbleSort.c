#include <stdio.h>
int bubbleSort(int arr[], int n){
  int temp, trocou;
  for(int i; i < n -1; i++){
    trocou = 0;
    for(int j; j< n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        arr[j] = temp;
        arr[j]  = arr[j + 1];
        arr[j+1] = temp;
        trocou = 1;
      }
    }
    if(trocou == 0){
      break;
    }
  }
}
int main(void) {
  return 0;
}