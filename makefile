all: main.c bin run clean

bin: main.c
	gcc $< -o bin

.PHONY: run bin

run:
	./bin

clean:
	rm bin