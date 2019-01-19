#include<cstdlib>
#include<cstring>
#include<string>
#include<iostream>
#include<string>

using namespace std;

// just passes arguments to clang 
// and adds cflags
int main(int argc,char ** argv){
	
	string clang_and_flags = { "clang --target=x86_64-pc-linux-gnu "};

	// get the size of all args
	size_t size = 0;
	for(int i = 1; i< argc; ++i){
		size += strlen(argv[i]);
	}

	// resize the string to fit all args
	clang_and_flags.resize(clang_and_flags.size() + size);
	
	// concatenate all arguments
	for(int i = 1; i < argc; ++i){
		clang_and_flags.append(" ");
		clang_and_flags.append(argv[i]);
	}

        //std::cout <<"call is " << clang_and_flags << "\n";

	system(clang_and_flags.c_str());
	
	 return 0;
}
