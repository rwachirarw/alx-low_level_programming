; File: hello.asm
section .data
msg db 'Hello, Holberton', 0x0A

section .text
global _start

_start:
; write(1, msg, 16)
mov eax, 1       ; System call for write
mov edi, 1       ; File descriptor for stdout
mov rsi, msg     ; Address of the message
mov edx, 16      ; Message length
syscall

; exit(0)
mov eax, 60      ; System call for exit
xor edi, edi     ; Exit status
syscall

