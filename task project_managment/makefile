CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir /s *.c*)#project.c main.c
OBJECT=project.o main.o#$(CFILES:.c=.o)
TARGET=project
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)