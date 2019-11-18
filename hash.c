#include<stdio.h>
#include<stdlib.h>
#define Max 10
int insert(int);
int search(int);
int disp();

int a[100],ch[100];

void main()
{
int n,c,x,p,j;
while(1)	
	{
		printf("\n MENU ");
		printf("\n\n1.Insert\n2.Search\n3.Display\n4.Exit\n\nEnter your choice(1-4)");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("Enter the element to be inserted: ");
					scanf("%d",&n);
					insert(n);	
					break;
			case 2: printf("Enter the element to be searched: ");
					scanf("%d",&x);
					p=search(x);
					if(p==-1){
						printf("element not found");
					else
						printf("found at %d",i);}
					break;
			case 3: j=disp();
					if(j==-1){
					printf("Array empty");
					}
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
	
int insert(int n){
int flag=0,mod=n%10,i=(mod+1)%Max;
if(ch[mod]==0){
	a[mod]=n;
	ch[mod]=1;
	return 1;
	}
else{
while(i<mod){
if(ch[mod]==0){
a[i]=0;
ch[i]=1;
printf("Insertion successful");
}
i=i%10;
}
printf("Insertion unsuccessful");
i=i%10;
}
}

int search(int n){
	int mod=n%10,i=(mod+1)%Max;
	if(ch[mod]==0)
		return -1;
	else if(a[mod]=n)
		return mod;
	while(i<mod){
		if(a[i]==n)
			return i;
		i=i%10;
		}
		return -1;
	}

int disp(){
int flag=0;
for(int i=0;i<Max;i++){
if(ch[i]==1){
printf("The elements are:%d ",a[i]);
flag=1;
}
}
if(flag==0){
return -1;
else
return 1;
}
}
