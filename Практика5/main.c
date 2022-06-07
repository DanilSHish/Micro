#include <8051.h>
#include <stdlib.h>
#include <stdio.h>

void main()
{
 	char symbol[5][4]={{'0','1','2','3'},
                   {'4','5','6','7'},
                   {'8','9','A','B'},
				   {'C','D','E','F'},
				   {'G','H','I',' '}};
	
	unsigned char *str1=" 1 ";
	unsigned char *str2=" 4 ";
	unsigned char *str3=" 9 ";
	unsigned char *str4=" 16 ";
	unsigned char *str5=" 25 ";
	unsigned char *str6=" 36 ";
	unsigned char *str7=" 49 ";
	unsigned char *str8=" 64 ";
	unsigned char *str9=" 81 ";
	unsigned char *str10=" 100 ";
	unsigned char *str11=" 121 ";
	unsigned char *str12=" 144 ";
	unsigned char *str13=" 169 ";
	unsigned char *str14=" 196 ";
	unsigned char *str15=" 225 ";
	unsigned char *str16=" 256 ";
	unsigned char *str17=" 289 ";
	unsigned char *str18=" 324 ";
	unsigned char *str19=" 361 ";
	unsigned char *str20=" 400 ";
	int k = 0, j = 0, n=-1;

	
	int i=0;
	P0 = 0x38;
	P2 = 0x1;
	P2 = 0x0;
	P0 = 0x80;
	P2 = 0x1;
	P2 = 0x0;

	while(1){
	P10 = 0;
	if(P30 == 0){ P0 = symbol[0][3]; k = 3; P2 = 0x3; P2 = 0x2;}//3 = 9
	if(P31 == 0){ P0 = symbol[0][2]; k = 2; j = 2; P2 = 0x3; P2 = 0x2;}//2 = 4 
	if(P32 == 0){ P0 = symbol[0][1]; k = 0; j = 1; P2 = 0x3; P2 = 0x2;/* P0 = 0x03; P2 = 0x3; P2 = 0x2;*/}//1 = 1
	if(P33 == 0){ P0 = symbol[0][0]; n = 0;P2 = 0x1; P2 = 0x2;}//0 = 0
	P10 = 1;

	P11 = 0;
	if(P30 == 0){ P0 = symbol[1][3]; k = 7; P2 = 0x3; P2 = 0x2;}//7 = 49
	if(P31 == 0){ P0 = symbol[1][2]; k = 6; P2 = 0x3; P2 = 0x2;}//6 = 36
	if(P32 == 0){ P0 = symbol[1][1]; k = 5; P2 = 0x3; P2 = 0x2;}//5 = 25
	if(P33 == 0){ P0 = symbol[1][0]; k = 4; P2 = 0x3; P2 = 0x2;}//4 = 16
	P11 = 1;

	P12 = 0;
	if(P30 == 0){ P0 = symbol[2][3]; P2 = 0x3; P2 = 0x2;}//B
	if(P31 == 0){ P0 = symbol[2][2]; P2 = 0x3; P2 = 0x2;}//A
	if(P32 == 0){ P0 = symbol[2][1]; k = 9; P2 = 0x3; P2 = 0x2;}//9 = 81
	if(P33 == 0){ P0 = symbol[2][0]; k = 8; P2 = 0x3; P2 = 0x2;}//8 = 64
	P12 = 1;

	P13 = 0;
	if(P30 == 0){ P0 = symbol[3][3]; P2 = 0x3; P2 = 0x2;}//F
	if(P31 == 0){ P0 = symbol[3][2]; P2 = 0x3; P2 = 0x2;}//E
	if(P32 == 0){ P0 = symbol[3][1]; P2 = 0x3; P2 = 0x2;}//D
	if(P33 == 0){ P0 = 0x1; P2 = 0x1; P2 = 0x0;j=0;k=0;}//C
	P13 = 1;

	P14 = 0;
	if(P30 == 0){
	if(j == 1 && k == 0){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str1[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}

	if(j == 0 && k == 2){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str2[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 3){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str3[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 4){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str4[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 5){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str5[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 6){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str6[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 7){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str7[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 8){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str8[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 0 && k == 9){
		for(i=0;i<4;i++)
		{	P2 = 0x80;
			P0 = str9[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	/*if(j == 1 && 0 == 0){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str10[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}*/

	if(j == 1 && k == 1){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str11[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 2){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str12[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 3){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str13[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 4){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str14[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 5){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str15[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 6){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str16[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 7){
		for(i=0;i<4;i++)
		{	P2 = 0x0C;
			P0 = str17[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 8){
		for(i=0;i<4;i++)
		{	P2 = 0x80;
			P0 = str18[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 1 && k == 9){
		for(i=0;i<4;i++)
		{	P2 = 0x80;
			P0 = str19[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	if(j == 2 && n == 0){
		for(i=0;i<4;i++)
		{	P2 = 0x80;
			P0 = str20[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
}//Space
	if(P31 == 0){ P0 = symbol[4][2]; P2 = 0x3; P2 = 0x2;}//I
	if(P32 == 0){ P0 = symbol[4][1]; P2 = 0x3; P2 = 0x2;}//H
	if(P33 == 0){ P0 = symbol[4][0]; P2 = 0x3; P2 = 0x2;}//G
	P14 = 1;
	

	
	}

}