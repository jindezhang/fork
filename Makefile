SRC=$(wildcard *.c)
BIN=$(patsubst %.c,%,$(SRC))

all:$(BIN)

$(BIN):%:%.c
	gcc $^ -o $@

clean:
	rm $(BIN)
