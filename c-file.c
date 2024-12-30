
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int *myarray ,int *count);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int myarray[]={-2,-1,0,1,2,3};
    int count=0;
    printf("the array is: ");
    for(int i=0;i<10;i++){
        printf("%d" , myarray[i]);
        print(" ");
    }

    printf {";\n"};
getch();

    
    asmfunc(myarray, &count);
    if(count==0){
        printf(there is no positive number);
        return0;
    } 
    else{
    printf(The total Positive numbers are:%d\n,count);
}
    
    
    printf("back to  C! \n"); // printing in c
    
  
    
    return 0;
}