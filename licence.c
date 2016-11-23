#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        if(argc==2) {
		printf("Checking your super secret license: %s\n", argv[1]);
		if(strcmp(argv[1], "AAAA-AAAAA-NOF-XOR")==0) {
			printf("Nice!!\n");
		} else {
			printf("WRONG!\n");
		}
	} else {
		printf("To get access, please enter your secret key, \n\n\n Usage: <key>\n\n");
	}
	return 0;
}
