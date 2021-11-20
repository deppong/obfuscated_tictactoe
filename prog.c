#include <stdio.h>

#define Y(x) b["VPSTURXWVTRPQWTPX"[x%18]-'P']
#define Z(S,C,c,s,z) printf("%c%c%c%c%c\n",S,C,c,s,z)
#define O(x) x==0?' ':x==1?'x':'o'

typedef q          ;char/**/                typedef h
;q B(q*b)          {q s=0,i=             0;for(;i<18;i+=
 2){s|=Y(i        )&Y(i+1)&           Y(i+2);}      return s
 ;}void C(        q*b,q t){           putchar(      10);h*a=
  "xo", p;q      i=0,l=48,            z=0;p=(t      &1)?*(a+
   0):(t==0)    ?'0':*(a+             1);for(;      i<5;i++)
    { i & 1?Z  (43,45,43              ,45,43):      p=='0'?(
     Z(l,124,l+1,124,l+               2),l+=3)      :(Z(O(b[
    z]),124,O  (b[z+1]),              124,O(b[      z+2])),z
   += 3); }}    main() {q             b[9]={0}      ,t=0,s=0
  ,x=1;C(b,      t);while(            B(b)==0)      {q i=0;x
 =1;scanf(        "%d",&s);           if( b[s]      !=0){t=t
 ==1?1:t--        ;}else{b[           s]=t&1?2      :1;t++;}
C (b, t);          for(;i<9;             i++){x&=b[i]!=0
;}if(x==1          )break; }                printf ( 

"%c wins",(x&&!B(b))?'t':(t&1)?'x':'o');}/* XODeppong 2021*/