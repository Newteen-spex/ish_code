CC = gcc
GFLAGS = -Wall -g -o
TARGET = LinkTest
OBJECTS = main.o link.o
SOURCES = head.h

$(TARGET) : $(OBJECTS)
	$(CC) $(GFLAGS) $(TARGET) $(OBJECTS)

$(OBJECTS) : $(SOURCES)

.PHONY : clean
clean : 
	rm -f $(TARGET) *.o
