
all: clang clang++

clean:
	rm -f x86_64-w64-mingw32-clang x86_64-w64-mingw32-clang++

clang: runClang.cpp
	$(CXX) runClang.cpp -O2 -flto -o x86_64-w64-mingw32-clang
	
clang++: runClang++.cpp
	$(CXX) runClang++.cpp -O2 -flto -o x86_64-w64-mingw32-clang++
