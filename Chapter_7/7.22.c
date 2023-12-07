#include <stdio.h>
#include <stdlib.h>
//Maze Traversal
const int size = 12;

void maze2(int a, int b){
    char wall = '#'; // bunu "" ile yazmakla farkını anlamadım
    char path = '.';
    char konum = 'x';
    char *maze[size][size] = {{&wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall},
                        {&wall, &path, &path, &path, &wall, &path, &path, &path, &path, &path, &path, &wall },
                        {&path, &path, &wall, &path, &wall, &path, &wall, &wall, &wall, &wall, &path, &wall },
                        {&wall, &wall, &wall, &path, &wall, &path, &path, &path, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &wall, &wall, &wall, &path, &wall, &path, &path },
                        {&wall, &wall, &wall, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &path, &path, &path, &path, &wall, &path, &wall },
                        {&wall, &wall, &wall, &wall, &wall, &wall, &path, &wall, &wall, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &path, &path, &wall, &path, &path, &path, &wall },
                        {&wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall }};
    if(maze[a][b]==&wall)
        printf("\nYou hit the wall start again\n");
    
    else{
        maze[a][b] = &konum;
        for (int i=0; i < size; i++) {
            for (int k = 0; k < size; k++) {
                printf("%c", *maze[i][k]);
            }
            printf("\n");
        }
    printf("\n");
    }
}

int main() {
    
    char wall = '#'; // bunu "" ile yazmakla farkını anlamadım
    char path = '.';
    //hareketler
    char yukari = 'w';
    char sol = 'a';
    char asagi = 's';
    char sag = 'd';
    
    int dikey_baslangic = 2;
    int yatay_baslangic = 0;
    
    char move;
    
    char *maze[size][size] = {{&wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall},
                        {&wall, &path, &path, &path, &wall, &path, &path, &path, &path, &path, &path, &wall },
                        {&path, &path, &wall, &path, &wall, &path, &wall, &wall, &wall, &wall, &path, &wall },
                        {&wall, &wall, &wall, &path, &wall, &path, &path, &path, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &wall, &wall, &wall, &path, &wall, &path, &path },
                        {&wall, &wall, &wall, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &path, &path, &path, &path, &wall, &path, &wall },
                        {&wall, &wall, &wall, &wall, &wall, &wall, &path, &wall, &wall, &wall, &path, &wall },
                        {&wall, &path, &path, &path, &path, &path, &path, &wall, &path, &path, &path, &wall },
                        {&wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall, &wall }};
    char **cikis = &maze[4][11]; //burda niye mesela 2 yıldız kullandık ama int pointerı yazarken tek bunu da sor
    printf("To move in the game use W, A, S, D  to exit press -\n have fun!\n");
    maze2(dikey_baslangic, yatay_baslangic);
    printf("To move use the W,A,S,D: ");
    while(move != '-') {
        scanf("%c", &move);
        
        if(move == sag)
            yatay_baslangic++;
        
        else if (move == sol)
            yatay_baslangic--;
        
        else if (move == yukari)
            dikey_baslangic--;
        
        else if (move == asagi)
            dikey_baslangic++;
        
        if(maze[dikey_baslangic][yatay_baslangic] == &wall){
            printf("\nyou hit the wall. Game over. Start again!\n\n");
            dikey_baslangic = 2;
            yatay_baslangic = 0;
        }
        else
            maze2(dikey_baslangic, yatay_baslangic);
        printf("To move use the W,A,S,D: ");
        if(&maze[dikey_baslangic][yatay_baslangic] == cikis){ //şimdi burda niye & koydun başa diğerine niye bir şey koymadın bunu bi anla öğren
            printf("YOU WON THE GAME!!!\n");
            break;
        }
        //printf("İlerlemek için bir şeye basın(çıkmak için -): ");
    }
    
    
    /*for (int i=0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            printf("%c", *maze[i][k]);
        }
        printf("\n");
    }*/
    
    
    
    //printf("%p\n", (void *)*cikis); // burda niye void yazdık mesela bunu sor
    //printf("%p", *cikis);
    return 0;
}
