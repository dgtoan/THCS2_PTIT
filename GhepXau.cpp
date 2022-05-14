#include<stdio.h>
#include<string.h>
int main(){
     int t;
	 scanf("%d",&t);
	 while(t--){
	 	char a[10][15]; 
	 	int m;
		 scanf("%d ",&m);
		 for(int i=1;i<=m;i++){
		 	scanf("%s",a[i]); 
		 } 
		 for(int i=1;i<=m-1;i++){
		 	char t1[105],t2[105]; 
		 	for(int j=i;j<=m;j++){
		 		strcpy(t1,a[i]);
                strcat(t1,a[j]);
                strcpy(t2,a[j]);
                strcat(t2,a[i]);
                if(strcmp(t1,t2)>0)
		 		{
		 			strcpy(t1,a[i]);
		 			strcpy(a[i],a[j]);
					 strcpy(a[j],t1);  
				 } 
			 } 
		 } 
		 for(int k=1;k<=m;k++){
		 	printf("%s",a[k]); 
		 } 
		 printf("\n"); 
	 } 
}