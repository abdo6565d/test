intermediate:
	gcc -E file.c -o f.i
	gcc -P -E file.c -o fc.i
	gcc -S file.c -o f.asm
	gcc -S file.c -o f.o
	gcc file.c -o f.exe