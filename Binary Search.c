#include<stdio.h>
void search (int*ptr,int size,int x);

int main()
{
int arr[5]={5,8,3,9,1};
int z=0;
printf("please enter the numer you want to searche for\n");
scanf("%d",&z);
search(arr,sizeof(arr)/sizeof(arr[0]),z);

return 0;
}
void search (int*ptr,int size,int search)
{
int temp=0,index=0,start=0,end=size,middel=0,flag=0;
for(int i=0 ;i<size;i++)
{
	for(int j=0 ;j<size-1;j++)
	{
		if(ptr[j]>ptr[j+1])
		{
			temp=ptr[j];
			ptr[j]=ptr[j+1];
			ptr[j+1]=temp;
		}
	}
}
	for(int i=0;i<size;i++)
	printf("%d\n",ptr[i]);
	while(start<end)
	{
		middel=((start+end)/2);
	
	if(search==ptr[middel])
	{
		flag=1;
		index=middel;
		break;
	}
	else if(search>ptr[middel])
	{
		start=middel+1;
	}
	else
	{
		end=middel-1;
	}
	
	}
	if(flag==1)
	{
		printf("the number is found in index %d\n",index);
	}
	else
	{
		printf("the number is not found\n");
	}
}
