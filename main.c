#include <stdio.h>

void sort(int scores[], int size);
void print_array(char message[], int scores[], int size);

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    print_array("scores = ", scores, SIZE);
    sort(scores, SIZE);
    print_array("results = ", scores, SIZE);
    return 0;
}

void sort(int scores[], int size){
    int min;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(scores[i] > scores[j]){
                min = scores[i];
				scores[i] = scores[j];
				scores[j] = min;
            }
        }
    }
}

void print_array(char message[], int scores[], int size){
    printf("%s", message);
    for(int i=0; i<size; i++){
        printf("%d ", scores[i]);
    }
    printf("\n");
}