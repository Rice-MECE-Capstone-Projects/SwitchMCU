	# size of the stack is 1024 bytes
	.equ	STACK_SIZE, 1024

	.global	_start

	.text
_start:
	la	sp, stacks + STACK_SIZE	# set the initial stack pointer to the end of the first stack space
	j	start_kernel		# hart 0 jump to c

stacks:
	.org	0x10000
	.skip	STACK_SIZE 		# allocate space for all the harts stacks

	.end				# End of file
