#include<iostream>
#include<string>

using namespace std;

char matrix[3][27];
int sevenSegNumber[10][9]={ // 0 = ' ' , 1 = '|' , 2 = '_'
    /*0*/ 0,2,0,1,0,1,1,2,1,
    /*1*/ 0,0,0,0,0,1,0,0,1,
    /*2*/ 0,2,0,0,2,1,1,2,0,
    /*3*/ 0,2,0,0,2,1,0,2,1,
    /*4*/ 0,0,0,1,2,1,0,0,1,
    /*5*/ 0,2,0,1,2,0,0,2,1,
    /*6*/ 0,2,0,1,2,0,1,2,1,
    /*7*/ 0,2,0,0,0,1,0,0,1,
    /*8*/ 0,2,0,1,2,1,1,2,1,
    /*9*/ 0,2,0,1,2,1,0,2,1 };
    /*
    *_* *_*         3 row, 21+6 col
    |_| |_| .       1st number are at (0,1) (1,0) (1,1) (1,2) (2,0) (2,1) (2,2)
    |_| |_| .       2nd number are at (0,5) (1,4) (1,5) (1,6) (2,4) (2,5) (2,6)
                    3rd number are at (0,10) (1,8) (1,9) (1,10) (2,8) (2,9) (2,10)
                    4th number are at (0,14) (1,12) (1,13) (1,
                    5th number are at   ................
                    6th number are at   ...............
    */

void init(){ /*  สร้าง  pattern ของตารางเวลา */
    for(int i=0;i<3;i++){
        for(int j=0;j<27;j++){
            matrix[i][j]=' ';
        }
    }
    matrix[1][8]='.';
    matrix[2][8]='.';
    matrix[1][18]='.';
    matrix[2][18]='.';
}

void drawError(){
    int i=2;
    int count=0; /* ไว้ใช้นับว่ามันมีเลขไปกี่ตัวแล้ว เพราะ ตัวเลขในบล็อคถัดไปตำแหน่งมันจะเลื่อนอีก 2 */
    for(int j=1;j<27;j=j+4){
        if(count%2==0 && count!=0){
            j=j+2;
        }
        count++;
        matrix[i][j]='_';
    }
}

bool isValid(string txt){ /* เช็คว่าสามาเขียนเป็นเวลาได้มั้ย*/
    if(txt[3]-'0' > 5 || txt[6]-'0' > 5){
            return false;
    }return true;
}

void showTime(){ /*เขียนเวลา*/
    for(int i=0;i<3;i++){
        for(int j=0;j<27;j++){
                cout << matrix[i][j];
        }
        cout << "\n";
    }
}

int main(){
    init();
    showTime();
}
