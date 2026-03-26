#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
  printf(1, "reading address 0...\n");

  volatile int *p = (int *)0;
  volatile int x = *p;
  
  printf(1, "fail... (x=%d)\n", x);
  exit();
}