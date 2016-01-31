# the compiler
CC = g++

# compiler flags:
# -g     add debugging information to the executable file
# -Wall  turn on most, but not all, compiler warnings
CFLAGS = -g -Wall

# the build target executable:
TARGET = p1

all: $(TARGET)

$(TARGET): prog1.C main.C
	$(CC) $(CFLAGS) -o $(TARGET) prog1.C main.C

clean:
	$(RM) $(TARGET)
