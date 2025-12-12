
#include <stdio.h>

void subleq(int *a,int *b, int c){
   
    *b -=*a;
    if(*b<=0){
        printf("pula para o valor %d", c);
    }
    
}


int main()
{
    int a,b,c;
    printf("digite os valores de a e b, mais o valor da operação\n");
    scanf("%d %d %d", &a,&b,&c);
    
    subleq(&a,&b,c);
    
    printf("%d", b);

    return 0;
}
