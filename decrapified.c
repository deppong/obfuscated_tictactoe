#include <stdio.h>

/*
 * Tic tac toe in C By Deppong 11-20-21
 * Written with some weird methods for obfuscation, and already pretty hard to read
*/

#define Y(x) b["VPSTURXWVTRPQWTPX"[x%18]-'P']
#define Z(t,i,c,a,e) printf("%c%c%c%c%c\n",t,i,c,a,e)
#define O(x) x==0?' ':x==1?'x':'o'

int check_board(int *b) {
    int s=0,i=0;
    for (;i<18;i+=2){
        s |= Y(i)&Y(i+1)&Y(i+2);
    }
    return s;
}

void C(int*b, int t) {
    putchar(10);
    char*a="xo",p;
    int i=0,l=48,z=0;
    p=(t&1)?*(a+0):(t==0)?'0':*(a+1);
    for(; i < 5;i++){
        i&1?Z(43,45,43,45,43):p=='0'?(Z(l,124,l+1,124,l+2),l+=3):(Z(O(b[z]),124,O(b[z+1]),124,O(b[z+2])),z+=3);
    }
}

int main() {
    int b[9]={0,0,0,0,0,0,0,0,0},t=0,s=0,tie=1;
    C(b,t);
    while(check_board(b)==0) {
        int i=0;tie=1;
        scanf("%d",&s);
        if(b[s]!=0){
            t=t==1?1:t--;
        } else
        {
            b[s]=t&1?2:1;
            t++;
        }
        C(b,t);
        for (;i<9;i++){
            tie&=b[i]!=0;
        }if(tie==1)break;
    }
    printf("%c wins",(tie&&!check_board(b))?'t':(t&1)?'x':'o');
    return 0;
}

