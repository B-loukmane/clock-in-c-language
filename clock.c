#include<stdio.h>
#include<conio.h>
#include <windows.h>

int main(){
    int H,M,S ;
    H = M = S =0;
    while (!kbhit()) {
for ( H = 0; H < 24; H++) {
  for (M = 0; M < 60; M++) {
    for ( S = 0; S < 60; S++) {
      printf("%02d:%02d:%02d",H,M,S);
       Sleep(1000);
      system("cls");
    }
  }
}
}
}
