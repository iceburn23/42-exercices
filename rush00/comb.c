#include <unistd.h>

int main(void){

        char first[2] = '00';
        char last[2] = '01';
        char space[1] = ' ';
        char b_space[1] = ',';
        int tmp = 0; 

        while(tmp < 100){
                write(1,&first,2);
                write(1,&space,1);
                write(1,&last,2);
                write(1,&b_space,1);
                write(1,&space,1);  
                tmp++;
                last + 1;
                if(first == '99'){
                        break; 
                }
                if(tmp == 99){
                        tmp = 0;
                        first += 1; 
                        last = first + 1;  
                }else{
                        continue;
                }
        }
}
