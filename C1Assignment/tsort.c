#include <stdio.h>

int getlowest(int values[], int i, int arraysize);
void swap(int values[], int i, int j);
void tsort(int values[], int arraysize);
void printbefore(int val1[], int val2[], int val3[], int arraysize);
void printafter(int val1[], int val2[], int val3[], int arraysize);

int main() {
  int val1[] = {3, 2, 1, 5, 4, 6, 0, 9, 7, 8};
  int val2[] = {1, 0, 4, 7, 3, 0, 3, 9, 2, 8};
  int val3[] = {0, 1, 9, 2, 8, 3, 7, 4, 6, 5};

  printbefore(val1, val2, val3, 10);
  tsort(val1, 10);
  tsort(val2, 10);
  tsort(val3, 10);
  printafter(val1, val2, val3, 10);
}

/*getlowest: finds lowest numerical value in an array and returns the index*/
int getlowest(int values[], int i, int arraysize) {
  int c = values[i];
  int poslowest = i;
  for (i; i < arraysize; ++i) {
    if (values[i] < c) {
      c = values[i];
      poslowest = i;
    }
  }
  return poslowest;
}

/*swap: swaps the contents of subscripts inside the same array*/
void swap(int values[], int i, int j) {
  int c = values[i];
  values[i] = values[j];
  values[j] = c;
  return;
}

/*tsort: sorts array into ascending numerical order*/
void tsort(int values[], int arraysize) {
  for (int i = 0; i < arraysize; ++i) {
    swap(values, i, getlowest(values, i, arraysize));
  }
  return;
}

/*printbefore: prints arrays in collumns w header for pre sort*/
void printbefore(int val1[], int val2[], int val3[], int arraysize) {
  printf("VALUES BEFORE SORT\n");
  printf("val1\t\tval2\t\tval3\n");
  for (int i = 0; i < arraysize; ++i) {
    printf("%d\t\t%d\t\t%d\n", val1[i], val2[i], val3[i]);
  }
  return;
}

/*printafter: prints arrays in collumns w header for post after*/
void printafter(int val1[], int val2[], int val3[], int arraysize) {
  printf("VALUES AFTER SORT\n");
  printf("val1\t\tval2\t\tval3\n");
  for (int i = 0; i < arraysize; ++i) {
    printf("%d\t\t%d\t\t%d\n", val1[i], val2[i], val3[i]);
  }
  return;
}
