#include <stdio.h>

void sort(int scores[], int size);
void print_array(char message[], int scores[], int size);

int main(){
    const int SIZE = 6; //定数として配列のサイズを宣言
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    print_array("scores = ", scores, SIZE);
    sort(scores, SIZE);
    print_array("results = ", scores, SIZE);
    return 0;
}

void sort(int scores[], int size){
    int tmp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(scores[i] > scores[j]){
                tmp = scores[i];
				scores[i] = scores[j];
				scores[j] = tmp;
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