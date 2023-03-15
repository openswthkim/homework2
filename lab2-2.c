#include <stdio.h>
int main()
{
    int i; //int형 변수 i 선언 
    int *ptr; //포인터형 변수 ptr 선언
    int **dptr; //이중 포인터형 변수 dptr 선언
    
    i = 1234; //변수 i에 변수값 1234 대입
    
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); //변수 i에 들어있는 값 1234를 출력한다.
    printf("address of i == %p\n", &i); //변수 i의 주소를 출력한다.
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr이 가리키는 메모리 주소를 출력한다.
    printf("address of ptr == %p\n", &ptr); //변수 ptr이 할당된 메모리 상의 주소값을 출력한다.
    
    ptr = &i; /* ptr is now holding the address of i */ //포인터형 변수 ptr에 i의 주소값을 대입한다.
    
    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i); //변수 i에 들어있는 값 1234를 출력한다.
    printf("address of i == %p\n", &i); //변수 i의 주소를 출력한다.
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr이 가리키는 i의 주소값을 출력한다.
    printf("address of ptr == %p\n", &ptr); //ptr이 할당된 메모리 상의 주소값을 출력한다.
    printf("value of *ptr == %d\n", *ptr); //포인터 변수 ptr이 가리키는 i의 값 1234를 출력한다.

    dptr = &ptr; /* dptr is now holding the address of ptr */ // 이중 포인터형 변수 dptr에 ptr의 주소값을 대입한다.

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); //변수 i에 들어있는 값 1234를 출력한다.
    printf("address of i == %p\n", &i); //변수 i의 주소를 출력한다.
    printf("value of ptr == %p\n", ptr); //포인터 변수 ptr이 가리키는 i의 주소값을 출력한다.
    printf("address of ptr == %p\n", &ptr); //변수 ptr의 메모리 상 주소값을 출력한다.
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i의 값 1234를 출력한다.
    printf("value of dptr == %p\n", dptr); //이중 포인터 변수 dptr이 가리키는 메모리 주소를 출력한다.
    printf("address of dptr == %p\n", &dptr); //변수 dptr의 주소를 출력한다.
    printf("value of *dptr == %p\n", *dptr); //dptr이 가리키는 ptr의 값을 출력한다.
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 ptr의 주소에 있는 값인 i의 값 1234를 출력한다.
    
    *ptr = 7777; /* changing the value of *ptr */ //포인터형 변수 ptr에 새로운 값 7777 대입
    
    printf("\n[after *ptr = 7777] \n"); 
    printf("value of i == %d\n", i); //*ptr의 값이 변경 되면 ptr이 가리키는 값 i의 값도 바뀌어서 7777을 출력한다.
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 값 7777을 출력
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 주소에 있는 값 7777을 출력
    
    **dptr = 8888; /* changing the value of **dptr */ //이중포인터형 변수 dptr에 새로운 값 8888 대입
    
    printf("\n[after **dptr = 8888] \n"); 
    printf("value of i == %d\n", i); //**dptr이 값이 변경되면 dptr이 가리키는 변수 ptr의 값이 바뀌고 ptr이 가리키는 i의 값도 바뀌어 i의 값은 8888이 출력된다.
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 값 8888을 출력한다.
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 값 8888을 출력한다.
    
    printf("[----- [Taehyung Kim] [2020039024] -----]");
    
    return 0;
}