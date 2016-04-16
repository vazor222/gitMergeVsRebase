#include <stdio.h>
#include <time.h>

int main(void)
{
  printf("Hello World!\n");
  printf("more master work\n");
  printf("here is feature to merge 2!");
  time_t t;
  time(&t);
  printf("The current time is: %s", ctime(&t));
}
