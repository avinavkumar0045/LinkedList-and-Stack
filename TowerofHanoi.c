#include<stdio.h>
#include<stdlib.h>

void TowerOfHanoi(int disks , int source ,int destination ,  int spare){
    if ( disks == 0){
        return;
    }
    TowerOfHanoi(disks-1 , source , spare, destination);
    printf("disk %d  : %d ---->  %d \n", disks , source  , destination );
    TowerOfHanoi(disks-1 , spare , destination, source);
}

int main(){
    int disks;
    printf("Enter the number of disk : \n");
    scanf("%d", &disks);

    // let the bars be source , destnations , spare
    int pole1 = 1;
    int pole2 = 2;
    int pole3 = 3;
    TowerOfHanoi(disks , pole1 ,pole3 ,pole2);
    return 0;
}


