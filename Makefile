
CC=$(CROSS_COMPILE)gcc -g
TARGET=example_speak

example_speak:example_speak.cpp
	$(CC) example_speak.cpp -o example_speak
