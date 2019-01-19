#include<cstdlib>
#include<cstring>
#include<string>
#include<iostream>
#include<string>

using namespace std;

// just passes arguments to clang 
// and adds cflags
int main(int argc,char ** argv){
	
	// get the size of all args
	size_t size = strlen("clang++ --target=x86_64-pc-linux-gnu");
	for(int i = 1; i< argc; ++i){
		// acount for spaces between args
		size += strlen(argv[i])+1;
	}

	// resize the string to fit all args
	char * call = (char *)malloc(sizeof(char)*size);
	strcpy(call,"clang++ --target=x86_64-pc-linux-gnu");

	// concatenate all arguments
	for(int i = 1; i < argc; ++i){
		strcat(call," ");
		strcat(call,argv[i]);
	}

        std::cout <<"call=" << call << "\n";

	system(call);
	
	 return 0;
}
