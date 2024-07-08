#include <stdio.h>

int main(){

  int c, prev;
  prev = 0;

  while ((c = getchar()) != EOF){
    if (c == ' ') {
        if (prev != ' ') {
          putchar(' ');
        }
    } else if (c == '\t') {
        putchar('\\');
        putchar('t');
    } else if (c == '\b') {
        putchar('\\');
        putchar('b');
    } else if (c == '\\') {
        putchar('\\');
        putchar('\\');
    } else {
        putchar(c);
    }
    prev = c;
  }

  return 0;
}
