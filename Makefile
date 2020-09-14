.PHONY: run
all : ./grammar/x.g ./src/main.cpp
	make clean
	java -jar ./grammar/antlr/antlr.jar ./grammar/x.g
	mv ./x.tokens ./grammar/
	g++ -I./grammar/antlr/libantlr3c/ -L./grammar/antlr -lantlr3c -I./include/ -I./grammar/ ./src/*.cpp ./grammar/*.c -o ./bin/xlang

clean:
	-rm -rf ./grammar/*.c ./grammar/*.h ./grammar/x.tokens
	-rm -rf ./bin/xlang

run:
	./bin/xlang ./test/test.x
