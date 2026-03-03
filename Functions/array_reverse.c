#include<stdio.h>

void reverse(int *a,int n){
int as;
int b=n-1;
while(as<b){
int temp=*(a+as);
    *(a+as)=*(a+b);
    *(a+b)=temp;

as++;
b--;
}

}


int main(){

int as[5]={34,87,91,97,100};
int size=sizeof(as)/sizeof(as[0]);

reverse(as,size);
for(int i=0;i<size;i++){
printf("reverse of array:%d\n",as[i]);
}
return 0;
}
