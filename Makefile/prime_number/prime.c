#include "prime.h"

int pri(int a)
{

if(a<=1)
return 2;

if((a&1)==0)
return 2;

if(a==2)
return 1;

for(int i=3;i*i<=a;i+=2){
if((a%i)==0){
return 2;
}
}
return 1;
}
