CC      = gcc
CFLAGS  = -Wall -g
RM      = rm -f
TARGETS = fib

fib: fib.c
	$(CC) $(CFLAGS) fib.c -o fib

clean :
	$(RM) $(TARGETS)
