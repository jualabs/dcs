TARGETDIR="global2"
gcc -I global_controller_c -I /usr/local/lib/heptagon/c -c -o $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/_main.c
gcc -o global_sim $TARGETDIR"_c"/_main.o $TARGETDIR"_c"/$TARGETDIR.o /usr/lib/x86_64-linux-gnu/libmicrohttpd.so global_controller_c/global_controller.o