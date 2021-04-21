#include <stdio.h>

void pergunta1(){
    int iVar1;
    char local_58 [72];
    int ganhou;

    puts("1) Quem eh mais rapido, ram ou cache?");
    fgets(local_58,0x3f,stdin);
    iVar1 = strcmp(local_58,"cache,obvio\n");
    if (iVar1 == 0) {
        puts("Resposta correta!");
    }
    else {
        ganhou = 0;
    }
    return;
}

void pergunta2(void) {
    size_t sVar1;
    int local_90;
    unsigned char local_88 = 0x316120352f2e3120;
    unsigned char local_80 = 0x3331612061203320;
    unsigned char local_78 = 0x2f2861202c28392e;
    unsigned char local_70 = 0x4b2e202234333532;
    unsigned int local_68 = 0;
    char local_58 [72];
    int ganhou;
    puts("2) o que o rip faz?");
    fgets((char *)local_58,0x3f,stdin);
    sVar1 = strlen((char *)&local_88);
    local_90 = 0;
    while (local_90 < (int)sVar1) {
        if ((*(char *)((long)&local_88 + (long)local_90) ^ local_58[local_90]) != 0x41) {
            ganhou = 0;
        } else {
            ganhou = 1;
            break;
        }
        local_90 = local_90 + 1;
    }

    if(ganhou) {puts("Resposta correta!");} else {puts("Errou!");}
    return;
}

void pergunta3(void)
{
    long local_20;
    long local_18;
    int ganhou;

    local_18 = 0x1bd5a262d;
    puts("3) Em qual numero eu estou pensando?");
    __isoc99_scanf("%lu", &local_20);
    if (local_18 == local_20) {puts("Resposta correta!");}
    else {puts("Errou!");}
    return;
}

int main(void) {
    pergunta1();
    pergunta2();
    pergunta3();
    return 0;
}