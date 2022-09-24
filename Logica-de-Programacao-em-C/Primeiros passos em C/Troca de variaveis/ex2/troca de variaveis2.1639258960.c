#include<stdio.h>

main()
{
int x=1,y=2,z=3,k=4,i=5,a;
a=1, x=y, y=z, z=k,k=i; //a=1, x=y=2, y=z=3, z=k=4, k=i=5, 
printf("x: %d, y: %d, z: %d, k: %d, i: %d", x,y,z,k,a);
}