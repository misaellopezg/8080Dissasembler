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
	unsigned char buffer;
	int x = 0;
	fptr = fopen("C:\\Users\\misael.lopez\\Desktop\\Dissasembler\\invaders.h","rb");
	if(fptr == NULL)
	{
		printf("Error! Could not open file.\n");
		exit(1);
	}
	else
	{
		//Seek to the beginning of the file
		fseek(fptr, 0, SEEK_SET);
		//Read each character
		while( feof(fptr) == 0)
		{
			buffer = fgetc(fptr);
			printopcode(buffer);
		}
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