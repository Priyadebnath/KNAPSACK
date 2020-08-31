# KNAPSACK
int sum=0,round=0;
int balls[]={1,2,3,5,3,2,4,1}
for(i=0;i<8;i++)
sum=sum+balls[i];
if(sum>5)
{
round++;
sum=balls[i];
}
