CXX = g++
CXXFLAGS = -I ./grammar/antlr/libantlr3c -I./include -I./grammar
LDFLAGS = -lantlr3c -L /usr/bin -L ./grammar/antlr
RM = rm -f
TARGET = ./bin/xlang

all: clean xlang

xlang:
	java -jar ./grammar/antlr/antlr.jar ./grammar/x.g
	mv ./x.tokens ./grammar/
	$(CXX) $(CXXFLAGS) $(LDFLAGS) ./src/*.cpp ./grammar/*.c -o $(TARGET)

.PHONY: clean
clean:
	$(RM) ./grammar/*.c ./grammar/*.h ./grammar/x.tokens
	$(RM) ./bin/xlang

run:
	$(TARGET) ./test/test.x
