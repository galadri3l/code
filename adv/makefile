FILE=$(f)
FILE_STR=\"$(FILE)\"
FILE_TARGET:=$(shell python -c "print $(FILE_STR).split('.')[0]")
build: $(FILE)
	gcc -o $(FILE_TARGET) $(FILE) -lncurses -lpthread -lspinor
clean:
	rm $(FILE_TARGET)
