#include <stdio.h>
int main (){
    float notas[5];

        for (int i =0; i < 5; i++){
            printf ("entre com as notas %d: ", i+1);
            scanf ("%f", &notas[i]);
        }

        for (int i = 0; i < 5; i++){
            printf ("Notas %d: %.2f\n", i+1, notas[i]);
        }
    return 0;
}