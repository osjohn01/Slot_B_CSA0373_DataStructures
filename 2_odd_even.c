#include<stdio.h>
void main()
{
	int arry[10]={1,2,3,4,5,6,7,8};
	for(int i =0 ; i<9;i++){
		if(arry[i]%2==0){
			printf("%d is Even \n",arry[i]);
		}else{
			printf("%d is Odd \n",arry[i]);	
		}
	}
}