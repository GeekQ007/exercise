#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>  

int main()
{
	FILE *fp = NULL;
	char *dir = "./hello";
	if(access(dir, 0) == -1){
		if(mkdir(dir, 00777)){
			printf("mkdir failed");
			return 0;
		}
	}
	fp = fopen("./hello/test.txt", "wb");
	fclose(fp);
	return 0;
}
