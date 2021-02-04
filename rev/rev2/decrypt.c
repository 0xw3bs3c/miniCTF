#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

  char local_68[16];
  local_68[0] = 0x53;
  local_68[1] = 0x59;
  local_68[2] = 0x43;
  local_68[3] = 0x50;
  local_68[4] = 99;
  local_68[5] = 0x7c;
  local_68[6] = 0x60;
  local_68[7] = 0x44;
  local_68[8] = 0x6c;
  local_68[9] = 0x67;
  local_68[10] = 0x41;
  local_68[11] = 0x67;
  local_68[12] = 0x10;
  local_68[13] = 0x53;
  local_68[14] = 0x5f;

  char local_28[16];
  memset(local_28, 0, sizeof(local_28));

  int local_6c = 0;
  while (local_6c < 15)
  {
    for (int i = 0; i < 255; i++)
    {
      local_28[local_6c] = i;
      if ((local_6c + 0x14U ^ (int)local_28[local_6c]) == local_68[local_6c])
      {
        break;
      }
    }
    local_6c++;
  }
  local_28[15] = 0;
  printf("Flag: %s", local_28);
  return 0;
}
