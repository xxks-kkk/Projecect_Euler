# the compiler
CC = g++

# compiler flags:
# -g     add debugging information to the executable file
# -Wall  turn on most, but not all, compiler warnings
CFLAGS = -g -Wall

# the build target executable:
TARGET = hello

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	$(RM) $(TARGET)