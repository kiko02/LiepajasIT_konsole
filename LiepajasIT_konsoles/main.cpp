#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
void color(int i){
HANDLE hCon;

WORD  wAttributes;
if(i==1){

  wAttributes = BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
}else{
    wAttributes =  FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
}

hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon, wAttributes);

}
int main()
{
    int i=0;

while(1){
color(i);
if(i)
cout<<"TEST";
else
cout<<"test";
i=!i;

}
    return 0;
}
