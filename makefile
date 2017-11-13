all: args.c
	gcc args.c -o args.exe

run: all
	./args.exe

clean:
	rm foo
	rm *.out
	rm *~
