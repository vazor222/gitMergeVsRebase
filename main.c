#include <stdio.h>
#include <time.h>

int main(void)
{
  printf("Hello World!\n");
  time_t t;
  time(&t);
  printf("The current time is: %s", ctime(&t));
}
