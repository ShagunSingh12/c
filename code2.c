# include<stdio.h>
int main()
{
  int arr[20],pos,i,size,value;
  printf("Enter No.of elements in array");
  scanf("%d,&size");
  printf("Enter %d elements are\n",size);
  for(i=0;i<size;i++) 
  scanf("%d",&arr[i]);
  printf("Enter the position where you want to insert an element");
  scanf("%d",&pos);


return 0;
}
