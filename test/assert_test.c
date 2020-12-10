/*
 * Author: Prescott J. Traversi
 *
 * Tests granting the assert functions properly work.
 */

#include <assert.h>
#include "../src/assert.h"

int TestAssertNumberSuccess() {
  assert(AssertNumber(3, 3) == 0);
  return 0;
}

int TestAssertNumberFailure() {
  assert(AssertNumber(1, 3) == -1);
  return 0;
}

int TestAssertStringSuccess() {
  assert(AssertString("Hi", "Hi") == 0);
  return 0;
}

int TestAssertStringFailure() {
  assert(AssertString("Hi", "Hello") == -1);
  return 0;
}

int TestAssertArraySuccess() {
  int i, arr1[3], arr2[3];
  for (i = 0; i < 3; i++)
    arr1[i] = arr2[i] = i + 1;

  assert(AssertArray(arr1, arr2, 3) == 0);
  return 0;
}

int TestAssertArrayFailure() {
  int i, arr1[3], arr2[3];
  for (i = 0; i < 3; i++) {
    arr1[i] = i + 1;
    arr2[i] = 3 - i;
  }

  assert(AssertArray(arr1, arr2, 3) == -1);
  return 0;
}

void RunAssertTest() {
  TestAssertNumberSuccess();
  TestAssertNumberFailure();
  TestAssertStringSuccess();
  TestAssertStringFailure();
  TestAssertArraySuccess();
  TestAssertArrayFailure();
}
