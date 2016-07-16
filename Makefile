compile:
	g++ *.cpp `sdl-config --cflags --libs` -o ejercicio3
run: compile
	./ejercicio3
