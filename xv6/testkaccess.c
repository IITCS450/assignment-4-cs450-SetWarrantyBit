#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "read kernel memory...\n");
  
  volatile int *p = (int *)0x80000000;
  volatile int x = *p; 
  
  printf(1, "test failed... (x=%d)\n", x);
  exit();
}