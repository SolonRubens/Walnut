CC=clang++
ROOTDIR=/Users/jonny/Documents/PROGRAMMING/cpp/_learn/Walnut/
SANDDIR=Sandbox/src/
WALDIR=Walnut/src/Walnut/
INC=-I$(ROOTDIR)Walnut/src -I$(ROOTDIR)Walnut/vendor/spdlog/include

all: sandbox

sandbox: $(SANDDIR)Sandbox.cpp
	$(CC) $(SANDDIR)Sandbox.cpp $(INC) -L$(ROOTDIR)lib -lapp -llog -o out

libgen:
	$(CC) -dynamiclib $(INC) $(WALDIR)Application.cpp -o lib/libapp.dylib
	$(CC) -dynamiclib $(INC) $(WALDIR)Log.cpp -o lib/liblog.dylib

remove:
	rm out

