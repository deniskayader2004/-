#include <stdio.h>
#include "lr.h"
int main(){
    int choise;
    scanf("%d", &choise);
    switch(choise){
    case(1): return lab1();
    case(2): return lab2();
    case(3): return lab3();
    case(6): return lab6();
    case (61): return lab61();
    case(7): return lab7();
        }
return 0;
}
