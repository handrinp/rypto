#------------- VARIABLES -------------#
COMPILER=gcc
COMPILE_FLAGS=-Wall -c -o
LINK_FLAGS=-o

#------------- BUILD MAKE TARGETS -------------#
bin/rypto: obj/main.o bin
	$(COMPILER) obj/main.o $(LINK_FLAGS) bin/rypto

obj/main.o: obj src/main.c
	$(COMPILER) src/main.c $(COMPILE_FLAGS) obj/main.o

obj:
	mkdir obj

bin:
	mkdir bin

#------------- SPECIAL MAKE TARGETS -------------#
run: bin/rypto
	./bin/rypto

clean:
	rm -rf bin obj
