#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
	FILE *file = fopen(argv[1],"rb");
	FILE *ofile = fopen("new.wav","wb");
	int ch;
	while((ch=fgetc(file))!=EOF){
		fprintf(ofile,"%u",$);
	}
	fclose(file);
	fclose(ofile);
/*	int t=0;
	for(t;;t++){
		putchar($);
	}*/

	return 0;
}
