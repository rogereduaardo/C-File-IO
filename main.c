#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) 
{
  printf("C File I/O\n");

  // File Descriptor
  // 0 = stdin
  // 1 = stout
  // 2 = stderr
  char *msg ="stdout";
  ssize_t length = write(1, msg, strlen(msg));
  write(1, "\n", 1);
  printf("length: %lu\n", length);

  msg ="stderr";
  length = write(2, msg, strlen(msg));
  write(1, "\n", 1);
  printf("length: %lu\n", length);
  
  return 0;
}