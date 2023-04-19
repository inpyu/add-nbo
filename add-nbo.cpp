#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char*argv[]){
	FILE* one = fopen(argv[1],"rb");
	FILE* two = fopen(argv[2],"rb");
	
	uint32_t f1;
	uint32_t f2;

	fread(&f1, 1, sizeof(f1), one);
	fread(&f2, 1, sizeof(f2), two);

	f1 = ntohl(f1);
	f2 = ntohl(f2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",f1,f1,f2,f2,f1+f2,f1+f2);

	return 0;
}
