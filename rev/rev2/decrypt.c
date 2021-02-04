#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char given[16];
  given[0] = 0x53;
  given[1] = 0x59;
  given[2] = 0x43;
  given[3] = 0x50;
  given[4] = 99;
  given[5] = 0x7c;
  given[6] = 0x60;
  given[7] = 0x44;
  given[8] = 0x6c;
  given[9] = 0x67;
  given[10] = 0x41;
  given[11] = 0x67;
  given[12] = 0x10;
  given[13] = 0x53;
  given[14] = 0x5f;

  char flag[16];
  memset(flag, 0, sizeof(flag));

  int index = 0;
  while (index < 15)
  {
    for (int i = 0; i < 255; i++)
    {
      flag[index] = i;
      if ((index + 0x14U ^ (int)flag[index]) == given[index])
      {
        break;
      }
    }
    index++;
  }
  flag[15] = 0;
  printf("Flag: %s", flag);
  return 0;
}
