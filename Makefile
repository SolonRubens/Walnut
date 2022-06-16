CC=clang++
SANDDIR=Sandbox/src/
WALDIR=Walnut/src/Walnut/
INC=-I/Users/Jonny/Documents/PROGRAMMING/cpp/_learn/Walnut/Walnut/src -I/Users/Jonny/Documents/PROGRAMMING/cpp/_learn/Walnut/Walnut/vendor/spdlog/include

all: sandbox

sandbox: $(SANDDIR)Sandbox.cpp
	$(CC) -dynamiclib $(INC) $(WALDIR)Application.cpp $(WALDIR)Log.cpp -o libapp.dylib
	$(CC) $(SANDDIR)Sandbox.cpp $(INC) -L./ -lapp -o out

clean:
	rm out
