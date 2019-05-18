#include "pustaka.h"


int sequentSearch(int angka, int data[])
{
    int c;
    for(c=0; c<sizeArray; c++){
        if(data[c]==angka){return 1;}
    }
    return 0;
}


int isInverse(int list1[], int list2[])
{
    int c, d;
    for(c=0 , d=sizeArray-1; c<sizeArray, d>=0; c++,d--){
        if(list1[c]==list2[d]){return 1;}
    }
    return 0;
}


void minMax(int data[], int *min, int *max)
{
    int c;

    *min = data[0];
    for(c=0; c<sizeArray; c++){
        if(data[c]<*min){*min = data[c];}
    }

    *max = data[0];
    for(c=0; c<sizeArray; c++){
        if(data[c]>*max){*max = data[c];}
    }
}


int minMaxGap(int data[])
{
    int c;
    int min, max;

    min = data[0];
    for(c=0; c<sizeArray; c++){
        if(data[c]<min){min = data[c];}
    }

    max = data[0];
    for(c=0; c<sizeArray; c++){
        if(data[c]>max){max = data[c];}
    }
    return max-min;
}


int atLeast(char huruf, int jml, char teks[])
{
    int c, batas, total=0;
    int kecil;
    kecil=strlwr(teks);
    batas=strlen(kecil);

    for(c=0; c<batas; c++){
        if(huruf==teks[c]){total ++;}
    }
    if(total>=jml){return 1;}
    else {return 0;}
}
