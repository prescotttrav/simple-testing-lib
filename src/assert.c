/*
 * Author: Prescott J. Traversi
 *
 * Asserting test functions to validate if actual matches expected results.
 */

#include "assert.h"

#include <stdio.h>
#include <string.h>

int AssertNumber(int actual, int expected) {
  if (actual != expected) {
    printf("Actual: %d, Expected: %d\n", actual, expected);
    return -1;
  }
  return 0;
}

int AssertString(char actual[], char expected[]) {
  if (strcmp(actual, expected) != 0) {
    printf("Actual: %s, Expected: %s\n", actual, expected);
    return -1;
  }
  return 0;
}

int AssertArray(int actual[], int expected[], int n) {
  int i = 0;
  while (i < n) {
    if (actual[i] != expected[i]) {
      printf("First incorrect index at  %d. Actual: %d, Expected: %d\n", i, actual[i], expected[i]);
      return -1;
    }
    i++;
  }
  return 0;
}
