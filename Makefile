FLAGS = -Wall -Wextra -pedantic-errors -std=c99

all: fibo

fibo: main.c
	gcc $(FLAGS) -g main.c -o fibo

clean:
	rm -f fibo
