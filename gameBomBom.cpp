#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char kotak[9] = {
        'X', 'X', 'X',
        'X', 'X', 'X',
        'X', 'X', 'X'
    };

int main() {
    int historyInputan[9];

    // Buat random bom
    srand(time(NULL));
    int bom = rand() % 8;
    // printf("%d adalah bom", bom);

    int hasil = 0;
    for(int i=0; i<8; i++) {
        int userInput;
        // Masukkan inputan
        printf("\n>>> Masukkan angka dari 1-9: ");
        scanf("%d", &userInput);

        // Cek inputan apakah sudah pernah sebelumnya
        int kondisiHistory = 0;
        for(int j=0; j<i; j++){
            // printf("%d ", historyInputan[j]);
            if(historyInputan[j] == userInput){
                printf("\n!!! Sudah terbuka, input angka lain !!!\n");
                kondisiHistory = 1;
            }
            printf("\n");
        }
        if(kondisiHistory == 1){
            i--;
            continue;
        }

        historyInputan[i] = userInput;

        // Cek apakah inputan sama dengan bom
        if(userInput == bom) {
            hasil = 1;
            break;
        }

        // Jika tidak maka buka
        kotak[userInput-1] = 'O';

        printf("=============================\n\n");
        for(int kolom=0; kolom<3; kolom++){
            for(int baris=0; baris<3; baris++){
                printf("%c\t", kotak[kolom*3+baris]);
            }
            printf("\n");
        }
        printf("\n");
        printf("=============================\n\n");

    }


    if(hasil == 1) {
        printf("=============================\n\n");
        printf("=====*****!!!BOM!!!*****=====\n");
        printf("=====*****!!!BOM!!!*****=====\n\n");
        printf("=============================\n\n");
    } else {
        printf("=============================\n\n");
        printf("=======+++++=====+++++=======\n");
        printf("=======+++++=====+++++=======\n");
        printf("=======+++++=====+++++=======\n");
        printf("=======+++++=====+++++=======\n");
        printf("===========+++++++===========\n");
        printf("===========+++++++===========\n");
        printf("===========+++++++===========\n\n");
        printf("=============================\n\n");
    }

    return 0;
}