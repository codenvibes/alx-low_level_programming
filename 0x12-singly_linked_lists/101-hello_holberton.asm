section .data
	hello db "Hello, Holberton", 0    ; Null-terminated string to be printed
	format db "%s", 0		  ; Format string for printf
	newline db 10, 0		  ; ASCII code for newline character

section .text
	extern printf

global main
main:
	sub rsp, 8			   ; Allocate space on the stack
	mov rdi, format			   ; Load format string address into rdi
	mov rsi, hello			   ; Load string address into rsi
	xor eax, eax			   ; Clear eax register
	call printf			   ; Call printf to print the string

	mov rdi, format			   ; Load format string address into rdi
	mov rsi, newline		   ; Load newline address into rsi
	xor eax, eax			   ; Clear eax register
	call printf			   ; Call printf to print the newline

	add rsp, 8			   ; Deallocate stack space
	xor eax, eax			   ; Set return value to 0
	ret				   ; Return from main

