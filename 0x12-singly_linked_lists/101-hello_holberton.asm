section .data
	hello db 'Hello, Holberton', 0Ah ; 0Ah is a new line character

section .text
	global _start

_start:
	; write the string to stdout
	mov eax, 4 ; system call for write
	mov ebx, 1 ; file descriptor for stdout
	mov ecx, hello ; string to write
	mov edx, 16 ; number of bytes to write
	int 0x80 ; call kernel

	; exit program with status code 0
	mov eax, 1 ; system call for exit
	xor ebx, ebx ; return status code 0
	int 0x80 ; call kernel
