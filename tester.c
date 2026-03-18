#include <stdio.h>

void reverse_and_double(int arr[], int n);

int main() {
  int num[6] = {1, 2, 3, 4, 5, 6};

  reverse_and_double(num, 6);

  // Print the result to test it
  for (int i = 0; i < 6; i++) {
    printf("%d ", num[i]);
  }
  printf("\n");

  return 0;
}

void reverse_and_double(int arr[], int n) {
  int i;
  int j = n - 1;

  for (i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    j--;
  }

  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      arr[i] = arr[i] * 2;
    }
  }
}