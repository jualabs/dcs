CC = gcc
FLAGS = -Wall `pkg-config --cflags --libs allegro-5 allegro_acodec-5 allegro_audio-5 allegro_color-5 allegro_image-5`
BIN = main
SOURCE = main.c controller/controller_controller.c smart_environment/smart_environment.c smart_environment/smart_environment_types.c

all:
	$(CC) $(SOURCE) $(FLAGS) -o $(BIN)

clean:
	rm -f *.o main