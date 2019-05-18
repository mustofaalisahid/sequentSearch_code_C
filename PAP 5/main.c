#include "pustaka.h"

int main()
{
    int menu;
    printf("PILIHAN MENU\n\n");
    printf("1. sequentSearch\n");
    printf("2. isInverse\n");
    printf("3. minMax\n");
    printf("4. minMaxGap\n");
    printf("5. atLeast\n");

    printf("\nMasukkan pilihan : "); scanf("%d", &menu);
    printf("\n");

    switch(menu)
    {
    case 1:
        printf("\t\tSEQUENT SEARCH (input 4 kali)\n\n");

        int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};
        int cari;
        sizeArray = sizeof(data)/sizeof(int);

        printf("cari angka : "); scanf("%d", &cari);
        printf("sequentSearch(%d, data) -> %s\n\n", cari, (sequentSearch(cari,data)==1)?"true":"false");
        printf("cari angka : "); scanf("%d", &cari);
        printf("sequentSearch(%d, data) -> %s\n\n", cari, (sequentSearch(cari,data)==1)?"true":"false");
        printf("cari angka : "); scanf("%d", &cari);
        printf("sequentSearch(%d, data) -> %s\n\n", cari, (sequentSearch(cari,data)==1)?"true":"false");
        printf("cari angka : "); scanf("%d", &cari);
        printf("sequentSearch(%d, data) -> %s\n\n", cari, (sequentSearch(cari,data)==1)?"true":"false");

        break;


    case 2:
        printf("\t\tIS INVERSE\n\n");

        int list1[] = {1, 2, 3, 4, 5};
        int list2[] = {5, 4, 3, 2, 1};
        int list3[] = {6, 7, 8, 9, 10};
        int list4[] = {10, 9, 8, 7, 6};
        sizeArray = sizeof(list1)/sizeof(int);

        printf("isInverse(list1, list2) -> %s\n\n", (isInverse(list1,list2)==1)?"true":"false");
        printf("isInverse(list3, list4) -> %s\n\n", (isInverse(list3,list4)==1)?"true":"false");
        printf("isInverse(list1, list3) -> %s\n\n", (isInverse(list1,list3)==1)?"true":"false");
        printf("isInverse(list2, list4) -> %s\n\n", (isInverse(list2,list4)==1)?"true":"false");

        break;


    case 3:
        printf("\t\tMIN MAX\n\n");

        int list1a[] = {9, 12, 43, 13, 15};
        int list2a[] = {12, 4, 19, 9, 22, 1};
        int list3a[] = {8, 21, 29, 17, 20, 13};
        int list4a[] = {18, 11, 19, 25, 31, 15};

        int min, maks;

        sizeArray = sizeof(list1a)/sizeof(int);
        minMax(list1a, &min, &maks);
        printf("minMax(list1, a, b) -> a = %d, b = %d\n\n", min, maks);
        sizeArray = sizeof(list2a)/sizeof(int);
        minMax(list2a, &min, &maks);
        printf("minMax(list2, a, b) -> a = %d, b = %d\n\n", min, maks);
        sizeArray = sizeof(list3a)/sizeof(int);
        minMax(list3a, &min, &maks);
        printf("minMax(list3, a, b) -> a = %d, b = %d\n\n", min, maks);
        sizeArray = sizeof(list4a)/sizeof(int);
        minMax(list4a, &min, &maks);
        printf("minMax(list4, a, b) -> a = %d, b = %d\n\n", min, maks);

        break;


    case 4:
        printf("\t\tMIN MAX GAB\n\n");

        int list1b[] = {9, 12, 43, 13, 15};
        int list2b[] = {12, 4, 19, 9, 22, 1};
        int list3b[] = {8, 21, 29, 17, 20, 13};
        int list4b[] = {18, 11, 19, 25, 31, 15};

        sizeArray = sizeof(list1b)/sizeof(int);
        printf("minMaxGap(list1) -> %d\n\n", minMaxGap(list1b));
        sizeArray = sizeof(list2b)/sizeof(int);
        printf("minMaxGap(list2) -> %d\n\n", minMaxGap(list2b));
        sizeArray = sizeof(list3b)/sizeof(int);
        printf("minMaxGap(list3) -> %d\n\n", minMaxGap(list3b));
        sizeArray = sizeof(list4b)/sizeof(int);
        printf("minMaxGap(list4) -> %d\n\n", minMaxGap(list4b));

        break;


    case 5:
        printf("\t\tAT LEAST\n\n");

        char teks1[] = {'L','a','r','r','y','P','a','g','e'};
        char teks2[] = {'M','a','t','t','M','u','l','l','e','n','w','e','g'};
        char teks3[] = {'M','a','r','k','Z','u','c','k','e','r','b','e','r','g'};
        char teks4[] = {'J','i','m','m','y','W','a','l','e','s'};

        printf("atLeast('r', 3, [Larry Page]) -> %s\n\n",(atLeast('r', 3, teks1)==1)?"true":"false");
        printf("atLeast('m', 2, [Matt Mullenweg]) -> %s\n\n",(atLeast('m', 2, teks2)==1)?"true":"false");
        printf("atLeast('a', 2, [Mark Zuckerberg]) -> %s\n\n",(atLeast('a', 2, teks3)==1)?"true":"false");
        printf("atLeast('m', 2, [Jimmy Wales]) -> %s\n\n",(atLeast('m', 2, teks4)==1)?"true":"false");

        break;
    }
    return 0;
}
