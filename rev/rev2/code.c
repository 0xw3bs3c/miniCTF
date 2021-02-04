undefined8 main(void)

{
  bool bVar1;
  long in_FS_OFFSET;
  int index;
  uint given[16];
  char inp[24];
  long local_10;

  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  bVar1 = false;
  printf("Enter the flag : ");
  __isoc99_scanf(&DAT_00102016, inp);
  index = 0;
  do
  {
    if (0xe < index)
    {
      if (bVar1)
      {
        printf("FLAG : %s ", inp);
      }
    LAB_001012dc:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28))
      {
        return 0;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((index + 0x14U ^ (int)inp[index]) == given[index])
    {
      bVar1 = true;
    }
    if (!bVar1)
    {
      puts("TRY HARDER");
      goto LAB_001012dc;
    }
    index = index + 1;
  } while (true);
}
