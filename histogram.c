/**
 * CS1010 Semester 2 AY20/21
 * Exercise 3: Histogram
 *
 * Read in a sequence of real numbers and draw the histogram
 * corresponding to the number.
 *
 * @file: histogram.c
 * @author: XXX (Group YYY)
 */

#include "cs1010.h"
#include <math.h>

#define NUM_OF_BUCKETS 10
#define MAX_SCORE 100
#define BLOCK "█"
#define HALF_BLOCK "▌"

void draw_histogram(/* TODO: add parameters */)
{
  char *axis_labels[] = {
    "  0 - 10  ",
    " 10 - 20  ",
    " 20 - 30  ",
    " 30 - 40  ",
    " 40 - 50  ",
    " 50 - 60  ",
    " 60 - 70  ",
    " 70 - 80  ",
    " 80 - 90  ",
    " 90 - 100 ",
  };
  char *x_axis = "          ┴┴┴┴┴┴┴┴┴┴";

  cs1010_println_string(x_axis);

  for (long i = 0; i < NUM_OF_BUCKETS; i += 1) {
    cs1010_print_string(axis_labels[i]);
    /* TODO: draw the histogram bars*/
    cs1010_println_string("");
  }
}

int main()
{
}
