#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 81

typedef struct{
    double budget;
    double income;
    double spending;
    double nip; //net income per person NIP=(income-spending) / population
}strength;

typedef struct{
    char city[50];
    double population;
    strength str;
}turkey;
//function prototypes
void merge(turkey *arr, int l, int m, int r);
void mergeSort(turkey *arr, int l, int r); // Has an error it skips randomly one city and cause an error
void bubleSort(turkey *arr); // works perfectly fine - used inside the richestCity function
void populationReader(turkey *arr, char *file); //reads the related file and writes city names and populations to inside of 'struct turkey'
void recordData(turkey *arr); // manually enters data to the strength structer 'budget, income etc.'
void recordDataAuto(turkey *arr); // automatically enters data to the strength structer 'budget,income etc.'
void richestCity(turkey *arr); //finds the richest city acording to the nip (it also sort the citys smallest to larger nip)
void displayCities(turkey *arr); //prints the citys name and related data in table represantation
void writeCityData(turkey *arr, char *file); // writes everything inside a .txt file

int main(){
    turkey cityRecord[SIZE];
    
    populationReader(cityRecord, "/Users/berkayerinmez/Desktop/HW_1 Data/iller.txt");
    recordDataAuto(cityRecord);
    displayCities(cityRecord);
    richestCity(cityRecord);
    writeCityData(cityRecord, "/Users/berkayerinmez/Desktop/HW_1 Data/iller copy.txt");
    displayCities(cityRecord);

    return 0;
}

void populationReader(turkey *arr, char *file){
    //population data collected from TUIK 2023 which i obtained from https://biruni.tuik.gov.tr/
    // Since the names of the city and populations are fixed there is no need to write them manually
    FILE *output_file = fopen(file, "r");

    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return;
    }
    for (int i = 0; i < SIZE; i++) {
        fscanf(output_file, "%s %lf ", arr[i].city, &arr[i].population);
    }
    fclose(output_file);
}

void recordData(turkey *arr){
    printf("Sırasıyla şehirlerin bütçe(milyar), income(milyar), spending(milyar) verilerini giriniz.\n");
    printf("(Örneğin 1 milyar yazmak istiyorsanız sadece 1 yazınız.)\n");
    for (int i = 0; i<SIZE; i++) {
        printf("(%d)%s\n", i+1, arr[i].city);
        scanf("%lf %lf %lf", &arr[i].str.budget, &arr[i].str.income, &arr[i].str.spending);
        
        arr[i].str.nip = (arr[i].str.income - arr[i].str.spending) / arr[i].population;
        
    }
}

void recordDataAuto(turkey *arr){
    srand((unsigned)time(NULL));
    for (int i = 0; i<SIZE; i++) {
        arr[i].str.budget = (double)(rand()%1000)/100;
        arr[i].str.income = (double)(rand()%1000)/100;
        arr[i].str.spending = (double)(rand()%1000)/100;
        arr[i].str.nip = (arr[i].str.income - arr[i].str.spending) / arr[i].population;
        
    }
}

void richestCity(turkey *arr){
    int last=SIZE-1;
    //mergeSort(arr, 0, 81); // cause an error
    bubleSort(arr);
    printf("\n\t\t\t\tNIP endeksine göre en zengin şehir\n");
    printf("%-16.14s|\t%.lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\n", arr[last].city, arr[last].population, arr[last].str.budget, arr[last].str.income, arr[last].str.spending);
}

void displayCities(turkey *arr){
    printf("City\t\t\t|\tPopulation\t|\tBudget(B)\t|\tIncome(B)\t|\tSpending(B)\t|\n");
    printf("----------------|-----------------------|-----------------------|-----------------------|-----------------------|\n");
    for (int i = 0; i < SIZE; i++) {
        //printf("%s\t\t\t\t%.lf\t%.2lf %.2lf %.2lf\n", arr[i].city, arr[i].population, arr[i].str.budget, arr[i].str.income, arr[i].str.spending);
        printf("(%d)", i+1);
        printf("%-16.14s|\t%.lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\n", arr[i].city, arr[i].population, arr[i].str.budget, arr[i].str.income, arr[i].str.spending);
    }
}

void writeCityData(turkey *arr, char *file) {
  FILE *output_file = fopen(file, "w");

  if (output_file == NULL) {
    printf("Dosya açılamadı!\n");
    return;
  }
    fprintf(output_file, "City\t\t|\tPopulation\t|\tBudget(B)\t|\tIncome(B)\t|\tSpending(B)\t|\n");
    fprintf(output_file,"----------------|-----------------------|-----------------------|-----------------------|-----------------------|\n");
  // Write data to the file for each element in the array
  for (int i = 0; i < SIZE; i++) {
    fprintf(output_file, "%-16s|\t%.lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\t%.2lf\t\t|\n", arr[i].city, arr[i].population, arr[i].str.budget, arr[i].str.income, arr[i].str.spending);
  }

  fclose(output_file);

  printf("\nVeriler %s dosyasına yazıldı.\n\n", file);
}


void bubleSort(turkey *arr){
    turkey temp;
    for (int i=0; i<SIZE; i++) {
        for (int k=0; k<SIZE-1; k++) {
            if(arr[i].str.nip>arr[k].str.nip){
                temp = arr[k];
                arr[k]= arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
}


void merge(turkey *arr, int l, int m, int r) {

    int x, y, z;
    int c1 = m - l + 1;
    int c2 = r - m;

    // Geçici diziler
    turkey L[c1], R[c2];

    // Verileri geçici dizilere kopyala
    for (x = 0; x < c1; x++)
        L[x] = arr[l + x];
    for (y = 0; y < c2; y++)
        R[y] = arr[m + 1+ y];

    // Geçici dizileri birleştir
    x = 0;
    y = 0;
    z = l;
    while (x < c1 && y < c2) {
        
         if (L[x].str.nip <= R[y].str.nip) { //L(i) küçükse array e yaz
                    arr[z] = L[x];
                    x++;
                }
         else {//değilse R(j) yi yaz
             arr[z] = R[y];
             y++;
         }
         
         z++;
        }


    while (x < c1) {
         arr[z] = L[x];
         x++;
         z++;
    }

    while (y < c2) {
        arr[z] = R[y];
        y++;
        z++;
    }
}


void mergeSort(turkey *arr, int l, int r) {

     if (l < r) {
         int m = l + (r - l) / 2;
         mergeSort(arr, l, m);
         mergeSort(arr, m + 1, r);
         merge(arr, l, m, r);
     }
}
