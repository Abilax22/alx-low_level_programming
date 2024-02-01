global main
section .text

main: mov rdi, hello mov rdx, hello_len mov rax, 0 call printf
mov eax, 0x60  ; exit syscall number
xor edi, edi   ; exit status of 0
syscall
