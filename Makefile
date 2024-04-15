CC      = gcc
CFLAGS  = -Wall
RM      = rm -f
TARGETS = fib

fib: fib.c
	$(CC) $(CFLAGS) fib.c -o fib

clean :
	$(RM) $(TARGETS)
