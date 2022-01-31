#include <stdio.h>

void sort(int scores[]);
void print_array(char message[],int scores[]);

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    print_array("scores = ",scores);
    sort(scores);
    print_array("results = ",scores);
    return 0;
}

void sort(int scores[]){
    int min;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(scores[i] > scores[j]){
                min = scores[i];
				scores[i] = scores[j];
				scores[j] = min;
            }
        }
    }
}

void print_array(char message[],int scores[]){
    printf("%s",message);
    for(int i=0; i<5; i++){
        printf("%d ",scores[i]);
    }
    printf("\n");
}