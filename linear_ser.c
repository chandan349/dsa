#include<stdio.h>
int linearsearch (int arr[], int size, int element){
for(int i =0; i < size; i++)
{
if(arr[i] == element){
    return i;
}
}
return -1;
}


int main(){
    int arr[]= {1,2,3,45,56,67,78,87,98,34};
    int size = sizeof(arr)/sizeof(int);
    int element = 67;
    int searchIndex = linearsearch(arr, size, element);
    printf("The element %d found is index %d \n", element, searchIndex);
    return 0;

}