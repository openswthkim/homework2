#include <stdio.h>
int main()
{
    char charType; //char형 변수 charType 선언
    int integerType; //int형 변수 integerType 선언
    float floatType; //float형 변수 floatType 선언
    double doubleType; //double형 변수 doubleType 선언
    
    printf("Size of char: %ld byte\n",sizeof(charType)); //char형 변수 charType의 크기를 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //int형 변수 integerType의 크기를 출력한다.
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //float형 변수 floatType의 크기를 출력한다.
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double형 변수 doubleType의 크기를 출력한다.
    
    printf("-----------------------------------------\n");
    
    printf("Size of char: %ld byte\n",sizeof(char)); //자료형 char의 크기를 출력한다.
    printf("Size of int: %ld bytes\n",sizeof(int)); //자료형 int의 크기를 출력한다.
    printf("Size of float: %ld bytes\n",sizeof(float)); //자료형 float의 크기를 출력한다.
    printf("Size of double: %ld bytes\n",sizeof(double)); //자료형 double의 크기를 출력한다.
    
    printf("-----------------------------------------\n");
    
    printf("Size of char*: %ld byte\n",sizeof(char*)); //32bit의 설정으로 컴파일 시 포인터형 변수의 크기로 4바이트를 출력한다.
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //32bit의 설정으로 컴파일 시 포인터형 변수의 크기는 4바이트를 출력한다.
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //32bit의 설정으로 컴파일 시 포인터형 변수의 크기는 4바이트를 출력한다.
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //32bit의 설정으로 컴파일 시 포인터형 변수의 크기는 4바이트를 출력한다.
    
    printf("[----- [Taehyung Kim] [2020039024] -----]");
    return 0;
}
