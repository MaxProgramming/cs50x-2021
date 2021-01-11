#include<stdio.h>

int main(){

int start_size;
int end_size;
int lama_count;
int count = 0;

do{
    printf("Start size: ");
    scanf("%d", &start_size);  

} while (start_size < 9);

do{
    printf("End size: ");
    scanf("%d", &end_size);  

} while (end_size <= start_size);

do{
     count += 1;
     start_size = start_size + (start_size / 3) - (start_size / 4);
     

} while (start_size < end_size);

printf("Years: %d", count);

return 0;
}