#include <stdio.h>
#define MAXLINE 1000
/*prints line length and line*/

int mgetline(char s[], int lim);

int main() {
  char line[MAXLINE];
  int i;

  while ((i = mgetline(line, MAXLINE)) > 0) {
    printf("[%s] [%d]\n", line, i);
  }

  return 0;
}

/* getline: reads line and returns length(does some bodged stuff for starting w \n)*/
int mgetline(char line[], int lim) {
  int c, i;

  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  line[i] = '\0';
  if (c == EOF) {
    return 0;
  }
  return i + 1;
}
