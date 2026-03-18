#include <stdio.h>

void reverse_array(int arr[], int n);

int main() {
  int data[5] = {1, 2, 3, 4, 5};
  reverse_array(data, 5);
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d\n", data[i]);
  }

  return 0;
}

void reverse_array(int arr[], int n) {
  int i, j;

  for (i = 0; i < n / 2; i++) {
    j = n - i - 1;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}