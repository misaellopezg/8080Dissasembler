//This code will take 8080 assembly language code and translate its instructions
//to human-readable instructions
//Created by: Misael Lopez
//Date: 07/15/2021
#include <stdio.h>
#include <stdlib.h>
void printopcode(char c);

int main()
{
	//Create file pointer
	FILE *fptr;
	//Create buffer and program counter
	unsigned char *buffer;
	unsigned int filesize, pc = 0;
	//Open file; if failed, exit
	fptr = fopen("C:\\Users\\misael.lopez\\Desktop\\Dissasembler\\invaders.h","rb");
	if(fptr == NULL)
	{
		printf("Error! Could not open file.\n");
		exit(1);
	}
	else
	{
		//Find file size
		fseek(fptr,0L,SEEK_END);
		filesize = ftell(fptr);
		fseek(fptr, 0, SEEK_SET);
		//Store file in buffer
		buffer = malloc(filesize);
		fread(buffer,1,filesize,fptr);
		fclose(fptr);
	}
	return 0;
}

void printopcode(char code)
{
	switch(code)
	{
		case 0x00:
			printf("NOP\n");
		case 0x01:
			printf("LXI B,D16\n");
		default:
			printf("-\n");
	}
}