#include <stdio.h>
#include <string.h>
#include <malloc.h>


int main(int argc, char* argv){

    char* str;
	FILE* outPut;
	FILE* fp;
    int current = 0;
	char reading;
	

	str = malloc(sizeof(char) * 4);

		if((fp = fopen(argv[1], "r")) && (outPut = fopen(argv[2], "w"))){
		while((reading = fgetc(fp)) != EOF){
		
				switch(reading){
					case 'A':
					case 'a':	
						fputc('4', outPut);
						break;
                    case 'B':
					case 'b':
						fputc('8', outPut);
						break;
					case 'C':
					case 'c':
						fputc('(', outPut);
						break;
                    case 'D':
					case 'd':
						fputc('[)', outPut);
						break;
					case 'E':
					case 'e':
						fputc('3', outPut);
						break;
					case 'F':
					case 'f':
						fputs("ph", outPut);
						break;
                    case 'G':
					case 'g':
						fputc('6', outPut);
						break;
                    case 'H':
					case 'h':
						fputc('#', outPut);
						break;
					case 'I':
					case 'i':	
						fputc('1', outPut);
                    case 'J':
					case 'j':
						fputc('_|', outPut);
						break;
                    case 'K':
					case 'k':
						fputc('X', outPut);
						break;
                    case 'L':
					case 'l':
						fputc('1_', outPut);
						break;
                    case 'M':
					case 'm':
						fputc('|v|', outPut);
						break;
                    case 'N':
					case 'n':
						fputc('|v', outPut);
						break;
					case 'O':
					case 'o':
						fputc('0', outPut);
						break;
                    case 'P':
					case 'p':
						fputc('|*', outPut);
						break;
                    case 'Q':
					case 'q':
						fputc('()_', outPut);
						break;
                    case 'R':
					case 'r':
						fputc('2', outPut);
						break;
					case 'S':
					case 's':
						fputc('5', outPut);
						break;
					case 'T':
					case 't':
						fputc('7', outPut);
						break;
                    case 'U':
					case 'u':
						fputc('(_)', outPut);
						break;
                    case 'V':
					case 'v':
						fputc('|/', outPut);
						break;
                    case 'W':
					case 'w':
						fputc('vv', outPut);
						break;
                    case 'X':
					case 'x':
						fputc('><', outPut);
						break;
					case 'Y':
					case 'y':
						current = ftell(fp);
						fgets(str, 2, fp);
						if(!(strcmp(str, "ou")))
							fputc('U', outPut);
						else{
							fseek(fp, current, SEEK_SET);
						}
						break;
                    case 'Z':
					case 'z':
						fputc('>_', outPut);
						break;
					default:
						fputc(reading, outPut);
				}
			}
			fclose(fp);
			fclose(outPut);
		}else{
			perror("Error");
		}
	
	free(str);
    printf("Check your file, it's translated!\n");
}

