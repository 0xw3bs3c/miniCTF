;
; assemble and link with:
; nasm -f elf rev0.asm && gcc -m32 -o rev0 rev0.o
;
section .text
global main
extern printf

main:

    MOV eax, 1337
    MOV ebx, 2987
    MOV ecx, 6969
    CMP ebx, ecx 

    JZ L1
    JMP L2 

    L1: 
    IMUL ebx, eax
    ADD  ebx, eax
    MOV  eax, ebx
    SUB  eax, ecx

    L2: 
    IMUL ebx, eax
    SUB  ebx, eax
    MOV  eax, ebx
    ADD  eax, ecx
    JMP L3

    L3: 
    NOP
    push eax
    push message
    call printf
    add esp, 8
    ret

message db "Register = %d", 10, 0

