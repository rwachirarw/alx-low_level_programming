section .data           ; Data section, initialized variables
msg:    db "Hello, Holberton", 0 ; C string needs 0
fmt:    db "%s", 10, 0          ; The printf format, "\n", '\0'

section .text           ; Code section.
global _start           ; the standard gcc entry point

_start:                 ; the program label for the entry point
mov rdi, fmt        ; first argument: pointer to the format string
mov rsi, msg        ; second argument: pointer to the message string
mov rax, 0          ; clear rax register for using printf
call printf         ; call the C function printf

mov rax, 60         ; system call for exit
xor rdi, rdi        ; clear rdi register
syscall             ; call kernel

