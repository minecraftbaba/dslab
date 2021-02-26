#include<stdio.h>
void towers(int, char, char, char);
void main()
{int num;
printf("ENTER THE NUMBER OF DISKS\n");
scanf("%d",&num);
printf("THE SEQUENCE INVOLVED ARE:\n");
towers(num,'A','C','B');
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{
if(num==1)
{printf("MOVE DISK 1 FROM %c TO %c\n",frompeg,topeg);
return;
}
towers(num-1,frompeg,auxpeg,topeg);
printf("MOVE DISK %d FROM %c TO %c\n",num,frompeg,topeg);
towers(num-1,auxpeg,topeg,frompeg);
}
