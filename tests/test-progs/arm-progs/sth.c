#include <sys/types.h>

int arr[1024*128] = {3};

int main()
{
  int rnd;
  for(size_t i = 0 ; i < 10 ; i++)
  {
    for(size_t j = 0 ; j < 1024*128 - 1 ; j++)
    {
      rnd = arr[j] + arr[j+1];
      #ifdef FLUSH
      m5_flush_all_caches();
      #endif
    }
  }
}
