#include <8051.h>
#include <string.h>
#include <time.h>

void tick(short unsigned int* time) {
	time[5] += 1;
	
	if(time[5] >= 10){
		time[5] = 0;
		time[4] += 1;
	}
	if(time[4] >= 6){
		time[4] = 0;
		time[3] += 1;
	}
	if (time[3] >= 10) {
		time[3] = 0;
		time[2] += 1;
	}
	if (time[2] >= 6) {
		time[2] = 0;
		time[1] += 1;
	}
	if (time[1] >= 10) {
		time[1] = 0;
		time[0] += 1;
	}
	if ((time[0] == 1) && (time[1] == 2)) {
		time[0] = 0;
		time[1] = 0;
	}
}

void main()
{
	unsigned int i, j=1;
	unsigned char *str="1nd";
	unsigned char *str2="2nd";
	unsigned char *am="am";
	unsigned char *pm="pm";
	
	short unsigned int time[6] = { 1, 1, 5, 9, 5, 0};
while(1){
//time
	P0 = 0x0C;
	P0 = 0xC0;
	P2 = 0x1;
	P2 = 0x0;
	
	tick(time);
	for (i = 0; i < 6; i++) {
		P0 = time[i] + '0';
		P2 = 0x3;
		P2 = 0x2;
		if (i == 1) {
			P0 = ':';
			P2 = 0x3;
			P2 = 0x2;
		}
		if (i == 3) {
			P0 = ':';
			P2 = 0x3;
			P2 = 0x2;
		}	
	}
	if((time[0] == 0) && (time[1] == 0) && (time[2] == 0)&& (time[3] == 0)&& (time[4] == 0)&& (time[5] == 0)){
		j++;
	}
P0 = 0x0C;
	P0 = 0xC9;
	P2 = 0x1;
	P2 = 0x0;
	if(j%2 != 0){
		for(i=0;i<2;i++)
		{	
			P0 = am[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	else{
		for(i=0;i<2;i++)
		{	
			P0 = pm[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}

//1nd line
P0 = 0x0C;
	P0 = 0x80;
	P2 = 0x1;
	P2 = 0x0;
	for(i=0;i<2;i++)
	{ 
		P0 = str[i];
		P2 = 0x3;
		P2 = 0x2;
	}

//time
P0 = 0x0C;
	P0 = 0xC0;
	P2 = 0x1;
	P2 = 0x0;
	tick(time);
	for (i = 0; i < 6; i++) {
		P0 = time[i] + '0';
		P2 = 0x3;
		P2 = 0x2;
		if (i == 1) {
			P0 = ':';
			P2 = 0x3;
			P2 = 0x2;
		}
		if (i == 3) {
				P0 = ':';
				P2 = 0x3;
				P2 = 0x2;
		}
	}
P0 = 0x0C;
	P0 = 0xC9;
	P2 = 0x1;
	P2 = 0x0;
	if((time[0] == 0) && (time[1] == 0) && (time[2] == 0)&& (time[3] == 0)&& (time[4] == 0)&& (time[5] == 0)){
		j++;
	}
P0 = 0x0C;
	P0 = 0xC9;
	P2 = 0x1;
	P2 = 0x0;
	if(j%2 != 0){
		for(i=0;i<2;i++)
		{	
			P0 = am[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	else{
		for(i=0;i<2;i++)
		{	
			P0 = pm[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
//2nd time
P0 = 0x0C;
	P0 = 0xCD;
	P2 = 0x1;
	P2 = 0x0;
	for(i=0;i<2;i++)
	{
		P0 = str2[i];
		P2 = 0x3;
		P2 = 0x2;
	}

//time
P0 = 0x0C;
	P0 = 0xC0;
	P2 = 0x1;
	P2 = 0x0;
	tick(time);
	for (i = 0; i < 6; i++) {
		P0 = time[i] + '0';
		P2 = 0x3;
		P2 = 0x2;
		if (i == 1) {
			P0 = ':';
			P2 = 0x3;
			P2 = 0x2;
		}
		if (i == 3) {
				P0 = ':';
				P2 = 0x3;
				P2 = 0x2;
		}
	}
		P0 = 0xC9;
		P2 = 0x1;
		P2 = 0x0;
	if((time[0] == 0) && (time[1] == 0) && (time[2] == 0)&& (time[3] == 0)&& (time[4] == 0)&& (time[5] == 0)){
		j++;
	}
	P0 = 0xC9;
	P2 = 0x1;
	P2 = 0x0;
	if(j%2 != 0){
		for(i=0;i<2;i++)
		{	
			P0 = am[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	else{
		for(i=0;i<2;i++)
		{	
			P0 = pm[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}

//1nd line
P0 = 0x0C;
	P0 = 0x80;
	P2 = 0x1;
	P2 = 0x0;
	for(i=0;i<2;i++)
	{ 
		P0 = str2[i];
		P2 = 0x3;
		P2 = 0x2;
	}

//time
P0 = 0x0C;
	P0 = 0xC0;
	P2 = 0x1;
	P2 = 0x0;
	for (i = 0; i < 6; i++) {
		P0 = time[i] + '0';
		P2 = 0x3;
		P2 = 0x2;
		if (i == 1) {
			P0 = ':';
			P2 = 0x3;
			P2 = 0x2;
		}
		if (i == 3) {
				P0 = ':';
				P2 = 0x3;
				P2 = 0x2;
		}
	}
		P0 = 0xC9;
		P2 = 0x1;
		P2 = 0x0;
	if((time[0] == 0) && (time[1] == 0) && (time[2] == 0)&& (time[3] == 0)&& (time[4] == 0)&& (time[5] == 0)){
		j++;
	}
P0 = 0x0C;
	P0 = 0xC9;
	P2 = 0x1;
	P2 = 0x0;
	if(j%2 != 0){
		for(i=0;i<2;i++)
		{	
			P0 = am[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
	else{
		for(i=0;i<2;i++)
		{	
			P0 = pm[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}

//2nd line
P0 = 0x0C;
	P0 = 0xCD;
	P2 = 0x1;
	P2 = 0x0;
	for(i=0;i<2;i++)
	{
		P0 = str[i];
		P2 = 0x3;
		P2 = 0x2;
	}
}
}
