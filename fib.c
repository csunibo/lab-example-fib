#include <stdio.h>
#include <stdlib.h>

long int fib(long int n) {
  if (n == 0 || n == 1)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
  long int n;
  char *endptr;

  if (argc != 2) {
    printf("Usage: %s <number>\n", argv[0]);
    return 1;
  }

  n = strtol(argv[1], &endptr, 10);
  if (*endptr != '\0') {
    printf("Invalid input: %s\n", argv[1]);
    return 2;
  }

  printf("%ld\n", fib(n));
  return 0;
}
