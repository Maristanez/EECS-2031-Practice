#include <stdio.h>  // For input/output functions like printf and fgets
#include <string.h> // For string functions like strlen

int main() {            // Main entry point of the program
  char students[3][50]; // 2D array to store 3 student names, each up to 49
                        // chars + null terminator
  int i;                // Counter variable for the loop

  // --- LOOP 1: READ AND PROCESS ALL INPUTS ---
  for (i = 0; i < 3; i++) {
    // Read a line from standard input into the students array
    if (fgets(students[i], 50, stdin) == NULL)
      break;

    // Get the length of the string just read
    int len = strlen(students[i]);

    // If the string ends with a newline character, replace it with a null
    // terminator
    if (len > 0 && students[i][len - 1] == '\n') {
      students[i][len - 1] = '\0';
    }

    // Check if the student name is lowercase and capitalize it immediately
    if (students[i][0] >= 'a' && students[i][0] <= 'z') {
      students[i][0] = students[i][0] - 32;
    }
  }

  // --- LOOP 2: PRINT ALL RESULTS AT ONCE ---
  for (i = 0; i < 3; i++) {
    // Check if the student name is empty (only a newline was entered)
    if (students[i][0] == '\0') {
      printf("Error: Empty Name\n"); // Print error if name is empty
    } else {
      printf("%s\n", students[i]); // Print the processed name
    }
  }

  return 0; // Exit the program successfully
}