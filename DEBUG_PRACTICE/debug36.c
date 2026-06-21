void fun(int,int);
int main()
{fun(1,3);}
void fun(int i,int n)
{ printf("%d",i);
if(i==n)
return ;
fun(i+1,n);
printf("%d",i);}

