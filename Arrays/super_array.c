#include <stdio.h>

void* d1_enter(int array[], int *size){    //i am returning the location
    for(int i = 0; i < *size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &array[i]);
    }
    return array;
}


int d1_metadata(int* d1_enter ){
    int arr_size, arr_ele_size, size, op;
    size = sizeof(d1_enter)/sizeof(d1_enter[0]);
    
    printf("What do u want?\n1) size of array \n 2) number of elements\n3) what datatype?");
    scanf("%d", &op);

    switch(op){
        case 1: 
        return sizeof(d1_enter);
        break;

        case 2:
        return size;
        break;

        case 3:
        return sizeof(d1_enter[0]);
        break;

        default:
        print("idk");
    }
}

void* d2_enter(int array2[][10], int *rowsz, int *colmsz){
    for(int x = 0; x<rowsz; ) // this is for rows
}

int main() {
    int c, j, n, m;
    printf("what type of array do you want to deal with?\n1)1D array \t 2) 2D array");
    scanf("%d", &c);
    if (c == 1) {
        printf("Enter the size of the array: \n");
        scanf("%d", &j);
        int array[j];
        d1_enter(array, &j);
    } else if (c == 2) {
        printf("Enter the number of rows and columns: \n");
        scanf("%d %d", &n, &m);
        int array2[n][m];
        d2_enter(array2, &n, &m);        
        } else{
        printf("IDK");
    }

    return 0;
}

