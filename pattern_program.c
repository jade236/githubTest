#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i; j<n;j++)
{
printf(" ");
}

for(j=1;j<=(i*2)-1;j+=2)
{
printf("%d ",j);


}

for(j=(i-1)*2-1;j>=1;j-=2)
{
printf("%d ",j);


}

printf("\n");
}
for(i=n-1; i>=1;i--)
{
for(j=n;j>i;j--)
{
printf(" ");
}
for(j=1;j<=(i*2)-1;j+=2)
{
printf("%d ",j);
}
for(j=(i-1)*2-1;j>=1;j-=2)
{
printf("%d ",j);
}

printf("\n");

}
return 0;
}