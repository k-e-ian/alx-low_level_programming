; Written by: Ian Kitembe
; Purpose: Print out Hello, Holberton followed by \n

section .data
;this section contains data, variables with assignment of value, (contant)
;db = define byte, (dw; && dd;) define word.
msg: db "Hello, Holberton", 10, 0 ; msg this is our message
fmt: db "%s", 0 ;fmt this is our format specifier
section .bss
;declaration of modifiable variables
section .text
;program code goes here(equivalent to main)
extern printf
global main

main:
	push rbp

 	mov rdi, fmt
   	mov rsi, msg
   	mov rax, 0
   	call printf

   	pop rbp

   	mov rax, 0
   	ret
