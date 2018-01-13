	.data
n:	.word	0 # int n
s:	.word	0 # int s
	.text
main:
	li	$v0, 5
	syscall
	la	$t0, n
	sw	$v0, 0($t0)
	la	$t0, n
	lw	$t0, 0($t0)
	li	$t1, 1
	blt	$t0, $t1, L1
	b	L2
L1:
	li	$t0, 1
	neg	$t0, $t0
	move	$a0, $t0
	li	$v0, 1
	syscall
	b	L3
L2:
	li	$t0, 0
	la	$t1, s
	sw	$t0, 0($t1)
W1:
	la	$t0, n
	lw	$t0, 0($t0)
	li	$t1, 0
	bgt	$t0, $t1, W2
	b	W3
W2:
	la	$t0, s
	lw	$t0, 0($t0)
	la	$t1, n
	lw	$t1, 0($t1)
	add	$t0, $t0, $t1
	la	$t1, s
	sw	$t0, 0($t1)
	la	$t0, n
	lw	$t0, 0($t0)
	li	$t1, 1
	sub	$t0, $t0, $t1
	la	$t1, n
	sw	$t0, 0($t1)
	b	W1
W3:
	la	$t0, s
	lw	$t0, 0($t0)
	move	$a0, $t0
	li	$v0, 1
	syscall
L3:
	li	$v0, 10	# terminate program
	syscall
