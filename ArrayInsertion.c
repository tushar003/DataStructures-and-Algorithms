#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,x,position,k;
int *p;
p=(int*)malloc(30);

printf("Enter the Array Elements");

for(i=0;i<9;i++){
k=k+1;
scanf("%d",p+i);
}
printf("Enter the position");
scanf("%d",&position);
printf("Enter the Data Intem");
scanf("%d",&x);
while(k>=position){

*(p+k)=*(p+k-1);
k--;
}

*(p+position-1)=x;

for(i=0;i<9;i++){
printf("%d\n",*(p+i));
}

}
