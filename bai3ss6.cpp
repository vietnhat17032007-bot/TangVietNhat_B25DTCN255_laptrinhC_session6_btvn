#include <stdio.h>
int main(){
	int N,i,sum=0;
	printf("nhap vao so nguyen duong N: ");
	scanf("%d",&N); 
    for(i=1;i<=N;i++){
		sum += i; 
}
     printf("tong cac so nguyen tu 1 den %d la:%d\n",N,sum);
	 if(N<=0){
	 	printf("vui long nhap so nguyen duong\n"); 
	 } 
return 0; 
} 
