clean:
	rm -f main
compile:
	g++ -fdiagnostics-color=always -g main.cpp -o main
valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./main
run:
	clear && ./main $(ARGS)