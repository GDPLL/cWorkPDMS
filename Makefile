build: ./main.cpp ./src/* ./include/*
	g++ ./main.cpp ./src/* ./include/* -o pdms -g

clean:
	rm -rf ./pdms


