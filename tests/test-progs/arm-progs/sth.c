#include <sys/types.h>

#define FLUSH 1

int arr[1024*128] = {3};

int main()
{
  int rnd;
  for(size_t i = 0 ; i < 10 ; i++)
  {
    for(size_t j = 0 ; j < 1024*128 - 1 ; j++)
      rnd = arr[j] + arr[j+1];
    #if FLUSH
    m5_flush_all_caches();
    #endif
  }
}
