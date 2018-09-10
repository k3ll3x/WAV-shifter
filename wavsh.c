#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	FILE *file = fopen(argv[1],"rb");
	FILE *ofile = fopen("new.wav","wb");
	unsigned int ch;
	while((ch=fgetc(file))!=EOF){
		int t=0;
		for(t;t<ch;t++){
			/*putchar($);*/
			fprintf(ofile,"%x",$);
		}
	}
	fclose(file);
	fclose(ofile);

	return 0;
}
