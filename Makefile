CPP = clang++
CFLAGS = -std=c++11
CPPFLAGS = -I./third/libantlr3c/include -I./grammar -I./include
LDFLAGS = -L./third/libantlr3c/lib
LIBS = -lantlr3c
RM = rm -f
TARGET = ./bin/xlang

all: clean xlang

xlang:
	java -jar ./third/antlr-3.4-complete.jar ./grammar/x.g
	mv ./x.tokens ./grammar
	$(CPP) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LIBS) ./src/*.cpp ./grammar/*.c -o $(TARGET)

.PHONY: clean
clean:
	$(RM) ./grammar/*.c ./grammar/*.h ./grammar/x.tokens
	$(RM) ./bin/xlang

run:
	$(TARGET) ./test/test7.x
