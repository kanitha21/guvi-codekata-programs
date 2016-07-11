#include<stdio.h>
#include<stdlib.h>
main(){
	int value[1000],check[1000]={0},unique,i,temp;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&value[i]);
		temp=value[i];
		if(check[temp]==0){
			unique=value[i];
			check[temp]++;
		}
	}
	printf("%d",unique);
}
