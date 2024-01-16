#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// max, min, avg veren fonskiyon yaz

/* void stats(int *arr, int size, int *max, int *min, int *avg){
    *max = arr[0];
    *min = arr[0];
    
    int sum = 0;
    
    for (int i = 0; i<size; i++) {
        if(*max < arr[i])
            *max = arr[i];
        if( *min > arr[i])
            *min = arr[i];
        sum += arr[i];
    }
    
    *avg = sum/size;
    
}

int main(void){
    int size = 5;
    srand((unsigned)time(NULL));
    int arr[size];
    for(int i=0; i<size; i++){
        arr[i] = rand()%10000;
    }
    
    int max, min, avg;
    for(int m = 0; m < size; m++){
        printf("%d ", arr[m]);
    }
    printf("\n\n\n\n");
    stats(arr, size, &max, &min, &avg);
    
    printf("MAX:%d  MIN:%d   AVARAGE:%d\n\n", max, min, avg);
} */





















/*double fibon(int b){ //fibonacci sequance
    double f1= 0;
    double f2= 1;
    double i = 2;
    double new = 0;
    if(b == 0)
        return 0;
    else if (b == 1)
        return 1;
    while (i<=b){
        new = f1 + f2;
        i++;
        f1= f2;
        f2 = new;
    }
    return new;
    
} */


// /////////////////////////////////////////////

//Maze Traversal
// bu da ikinci kısım program yani ayrı program bu
// #define SIZE 12
//
//void maze_builder(void){
//    char wall = '#';
//    char path = '.';
//
//    time_t t;
//    srand((unsigned) time(&t));
//
//    char *maze[SIZE][SIZE];
//
//    for (int i = 0; i < SIZE; i++) { //makes the first row wall
//        maze[0][i] = &wall;
//    }
//
//
//   for (int i = 1; i < SIZE; i++) { //create maze
//        for (int k = 0; k < SIZE; k++) {
//            switch (rand() % 2) {
//                case 0: //create wall if rand hits 0
//                    maze[i][k] = &wall;
//                    break;
//                case 1:
//                    maze[i][k]= &path;
//                    break;
//            }
//        }
//    }
//
//    for (int i = 0; i < SIZE; i++) { //print the maze
//        for (int k = 0; k < SIZE; k++) {
//            printf("%c", *maze[i][k]);
//        }
//        printf("\n");
//    }
//}
//
//
//int main(){
//
//    time_t t;
//
//    srand((unsigned) time(&t));
//    maze_builder();
//    printf("%d", rand()%2 );
//}
//
