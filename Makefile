CC=clang++
SANDDIR=Sandbox/src/
WALDIR=Walnut/src/Walnut/
INC=-I/Users/Jonny/Documents/PROGRAMMING/cpp/_learn/Walnut/Walnut/src

all: sandbox

sandbox: $(SANDDIR)Sandbox.cpp
	$(CC) -dynamiclib $(WALDIR)Application.cpp -o libapp.dylib
	$(CC) $(SANDDIR)Sandbox.cpp $(INC) -L./ -lapp -o out

clean:
	rm out
