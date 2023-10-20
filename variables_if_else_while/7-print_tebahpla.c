#include <stdio.h>
  2 /**
  3  * main - entry point
  4  * Return: always 0 (Success)
  5  */
  6 
  7 int main(void)
  8 {
  9         char c;
 10 
 11         c = 'z';
 12 
 13         while (c <= 'a')
 14         {
 15                 putchar (c);
 16                 c = c + 1;
 17         }
 18         putchar ('\n');
 19 
 20         return (0);
 21 }
