Question 1: Weekday
-------------------

Write a program `weekday.c` that reads three positive
integers representing the year, month, and day of a date
respectively, and prints out which day of the week this
date is to the standard output. Possible outputs are
"Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
"Saturday", and "Sunday". The earliest date that can be
given as input is January 1, 1900 (which is a Monday).

You may find reusing functions you have written in Exercise 
1 useful.

Sample Run
----------
```
ooiwt@pe114:~/ex03-ooiwt$ ./weekday
1900 1 1
Monday

ooiwt@pe114:~/ex03-ooiwt$ ./weekday
1904 2 29
Monday

ooiwt@pe114:~/ex03-ooiwt$ ./weekday
2018 9 14
Friday
```

Question 2: Circle
------------------

Write a program circle.c that reads in a positive integer r
r from the standard input, and prints a circle of radius r
to the standard output.

We can consider this circle as being printed on a canvas 
of size (2r + 1) x (2r + 1), with the top left corner being
(0, 0) and the center of the circle at the position
(r, r). 

For each location (x, y), let the distance of (x, y) to the 
center be d(x, y). To print the circle, we print the following 
for each location (x, y):

- if | d(x, y) − r | < 0.1, print @ 
- otherwise, if | d(x, y) - r | < 0.3 , print O 
  (that's uppercase o, not zero) 
- otherwise, if | d(x, y) − r | < 0.5 , print *
- otherwise, if | d(x, y) − r | < 0.7 , print + 
- otherwise, print a white space.

Your output must contain exactly 2r + 1 rows, each row exactly 
2r + 1 characters (including the white spaces but excluding the 
newline). Note that in the sample runs below, the white spaces 
are not visible.

Sample Run
----------
```
ooiwt@pe114:~/as02-skeleton$ ./circle
1
*@*
@ @
*@*
ooiwt@pe114:~/as02-skeleton$ ./circle
5
   *@@@*
 +@+   +@+
 @       @
*+       +*
@         @
@         @
@         @
*+       +*
 @        @
 +@+   +@+
   *@@@*
ooiwt@pe114:~/as02-skeleton$ ./circle
10
       *O@@@O*
     OO+     +OO
   +@+         +@+
  +O             O+
  @               @
 O+               +O
 O                 O
*+                 +*
O                   O
@                   @
@                   @
@                   @
O                   O
*+                 +*
 O                 O
 O+               +O
  @               @
  +O             O+
   +@+         +@+
     OO+     +OO
       *O@@@O*
```

Question 3: Histogram
---------------------

It is often useful to visualize the distribution of
numerical data using a histogram. In this question,
you will write a program called histogram that plots
the histogram for real numbers ranged between 0 and 100
(inclusive).

Our histogram will have 10 buckets, b0, b1, .. b9.
The bucket bi corresponds to the interval [10i, 10(i+1))
(includes 10i , but excludes 10(i + 1)), except the last
bucket b9, which includes 100.

To plot the histogram, we count how many percent of the data 
falls into each bucket. Let the percentage of data that falls 
into bucket bi be ki%.  We set the length of each bar in 
histogram to be at most 10 characters, so we scale down
ki by 10 to get the length li

We then draw on the screen using character "█" and "▌", 
according to the following rules:

If li is an integer, then we draw "█" li times.
Otherwise, if x < li <= x + 0.5 for some integer x, 
then we draw "█" x times followed by a "▌".

Otherwise, if x + 0.5 < li < x + 1 for some integer x,
then we draw "█" x + 1 times.

Your program should read from the standard input:

- a positive integer n, 
- followed by n real numbers, corresponding to data to plot 
  the histogram with.

Your program should print the axis and labels, as well as the 
bars for the histogram as shown in the same run. The code to 
print both axis and labels are already given in the skeleton 
histogram.c. The string that corresponding to "█" and "▌" are 
also given in the code, defined as `BLOCK` and `HALF_BLOCK`.

Sample Run
----------
```
ooiwt@pe118:~/as03-skeleton$ ./histogram
10
25 35 35 45 45 45 45 55 55 65
          ┴┴┴┴┴┴┴┴┴┴
  0 - 10
 10 - 20
 20 - 30  █
 30 - 40  ██
 40 - 50  ████
 50 - 60  ██
 60 - 70  █
 70 - 80
 80 - 90
 90 - 100
ooiwt@pe118:~/as03-skeleton$ ./histogram
1
100
          ┴┴┴┴┴┴┴┴┴┴
  0 - 10
 10 - 20
 20 - 30
 30 - 40
 40 - 50
 50 - 60
 60 - 70
 70 - 80
 80 - 90
 90 - 100 ██████████
ooiwt@pe118:~/as03-skeleton$ ./histogram < inputs/histogram.5.in
          ┴┴┴┴┴┴┴┴┴┴
  0 - 10  ▌
 10 - 20  ▌
 20 - 30
 30 - 40  ▌
 40 - 50
 50 - 60  ▌
 60 - 70  █
 70 - 80  ██
 80 - 90  █████▌
 90 - 100 ██
```
