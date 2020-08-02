/*
 ============================================================================
 Name        : cStudy.c
 Author      : tm
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "point.c"

void showColor(int i);
typedef void (*MyFun)(int i);

int getSome(int (*gen)(void));
int getRam();

int main2(void) {


	/*printf("hello:%d",1);
	int n;

	scanf("input a number:%d",&n);
	printf("you input is %d",n);
	*/

	/*
	int c;
	c  = getchar();
	putchar(c);
	*/



//	char s[10];
//	gets(s);
//	puts(s);


	Point p;
    p.x=1;
    p.y=2;
    printf("point :%d,%d\n",p.x,p.y);
    //
    enum Color{
    	RED=1,BLACK,YELLOW
    };

    typedef enum Color Color;
    Color c=RED;
    printf("color:%d\n",c);

    showColor(1);

    MyFun myFun = showColor;
    myFun(1);

    printf("getSome:%d",getSome(getRam));



    int a=1;
    int *ad=&a;
    int **aad=&ad;


    printf("a's address:%d",**aad);
	return 0;
}

void showColor(int i){
	enum Color {
		RED, BLACK, YELLOW
	};

	typedef enum Color Color;
	Color c = RED;
	printf("color:%d\n", c);
}

int getRam(){
	return 1;
}
int getSome(int (*gen)(void)){
	return gen();
}
