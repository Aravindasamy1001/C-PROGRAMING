union U {
    int i;
    char c[4];
};
union U u;
u.i = 1;
printf("%d\n", u.c[0]);
