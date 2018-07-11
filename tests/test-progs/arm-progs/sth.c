#include <stdio.h>
#include <sys/types.h>

int main()
{
  for(size_t i = 0 ; i < 10 ; i++)
  {
    m5_flush_all_caches();
    printf("hello\n");
  }
}
