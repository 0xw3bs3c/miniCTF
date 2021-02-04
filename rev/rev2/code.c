undefined8 main(void)

{
  bool bVar1;
  long in_FS_OFFSET;
  int local_6c;
  uint local_68 [16];
  char local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  bVar1 = false;
  printf("Enter the flag : ");
  __isoc99_scanf(&DAT_00102016,local_28);
  local_6c = 0;
  do {
    if (0xe < local_6c) {
      if (bVar1) {
        printf("FLAG : %s ",local_28);
      }
LAB_001012dc:
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((local_6c + 0x14U ^ (int)local_28[local_6c]) == local_68[local_6c]) {
      bVar1 = true;
    }
    if (!bVar1) {
      puts("TRY HARDER");
      goto LAB_001012dc;
    }
    local_6c = local_6c + 1;
  } while( true );
}
