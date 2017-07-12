#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned char Byte; // 1 byte
typedef unsigned short Word;// 2 bytes
typedef unsigned int Dword;// 4bytes
typedef
    struct RGB { Byte B, G, R; }
RGB;
int main(){
    FILE * arquivo, * destino;
    RGB pixel;
    Byte byte; Word word; Dword dword; Byte lixo = 0;
    int WPX, BPP, HPX, NCP, AUX, PAL, i , j, AUX2;
    arquivo = fopen("iperetta.bmp", "rb");
    destino = fopen("iperetta3.bmp", "wb");
    if(!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return(EXIT_FAILURE);
    }
    printf ("==========================================================\n");
    fread(&byte,sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte), 1, destino);
    fread(&byte,sizeof(Byte),1,arquivo);
    fwrite(&byte,sizeof(Byte),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&word,sizeof(Word),1,arquivo);
    fwrite(&word,sizeof(Word),1,destino);
    fread(&word,sizeof(Word),1,arquivo);
    fwrite(&word,sizeof(Word),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    WPX = dword;// largura da imagem
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    HPX = dword; // Altura
    fread(&word,sizeof(Word),1,arquivo);
    fwrite(&word,sizeof(Word),1,destino);
    fread(&word,sizeof(Word),1,arquivo);
    fwrite(&word,sizeof(Word),1,destino);
    BPP = word;
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    fread(&dword,sizeof(Dword),1,arquivo);
    fwrite(&dword,sizeof(Dword),1,destino);
    printf ("==========================================================\n");
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    AUX = PAL - WPX*3;
    for (j = 0; j < HPX; j++){
        for (i = 0; i < WPX; i++)
            {
            fread(&pixel, sizeof(RGB), 1, arquivo);
            if(pixel.R == 5 && pixel.G == 114 && pixel.B == 185){
                pixel.R = 0;
                pixel.G = 0;
                pixel.B = 0;
            }
            fwrite(&pixel, sizeof(RGB), 1, destino);
        }
        if(AUX > 0){
            fseek(arquivo, AUX, SEEK_CUR);
            for(i = 0; i < AUX; i++)
                fwrite(&lixo,sizeof(Byte),1,destino);
        }
    }
    fclose(arquivo);
    fclose(destino);
    return 0;
}
