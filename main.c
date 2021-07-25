//This code will take 8080 assembly language code and translate its instructions
//to human-readable instructions
//Created by: Misael Lopez
//Date: 07/15/2021
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//Create file pointer
	FILE *fptr;
	unsigned char buffer[255];
	fptr = fopen("C:\\Users\\misael.lopez\\Desktop\\Dissasembler\\invaders.h","rb");
	if(fptr == NULL)
	{
		printf("Error! Could not open file.\n");
		exit(1);
	}
	else
	{
		//Seek to the beginning of the file
		fseek(fp, 0, SEEK_SET);
		//Read first two bytes of file
		fread(buffer, 2,1,fptr);
		printf("%s\n",buffer);
		fclose(fptr);
	}
	
	return 0;
}