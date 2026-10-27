#include <stdio.h>
int main(){
	int n,i,j,temp;
	int a[100];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Bubble sort
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
		//print array after each pass
		printf("Pass %d:",i+1);
		for(j=0;j<n;j++){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	return 0;
}
