target: something

something: src/main.c
	gcc src/glad.c src/main.c -o bin/main -lglfw 

run: bin/main
	./bin/main
