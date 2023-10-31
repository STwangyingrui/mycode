#include "stdlib.h"
#include "stdio.h"

int main() {
	fprintf(stderr, "call nvidia-smi one:\n");
	system("nvidia-smi");
	fprintf(stderr, "call watch -n 1 nvidia-smi two:\n");
	system("watch -n 1 nvidia-smi");
	fprintf(stderr, "call nvidia-smi three:\n");
	system("nvidia-smi");
	return 0;
}

