; Use "global _start" instead of "global main" for Linux systems
global main

; Declare external C function
extern printf

section .data
msg db "Hello, Holberton", 0   ; Null-terminated string
fmt db "%s", 10, 0             ; Format string for printf (newline and null terminator)

section .text
; Entry point for program
; Set up stack frame
push rbp
mov rbp, rsp

; Call printf function
mov rdi, fmt    ; First argument: format string
mov rsi, msg    ; Second argument: message string
xor eax, eax    ; Clear eax register (same as mov eax, 0)
call printf     ; Call the C printf function

; Clean up stack frame
mov rsp, rbp
pop rbp

; Return 0
xor eax, eax    ; Set eax register to 0 (same as mov eax, 0)
ret             ; Return from main function

