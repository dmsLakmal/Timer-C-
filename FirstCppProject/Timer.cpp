#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

int main(){

    int hr=0,min=0,sec=0;

    while (true)
    {
        system("cls");
        cout<<"*******************\n";
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        cout<<"*******************";
        sec++;

        if(sec==60){
            min++;
            sec=0;
                if (min==60)
                {
                    hr++;
                    min=0;
                        if (hr==0)
                        {
                            hr=0;
                        }
                        
                }
                
        }
        usleep(100000);
    }
    return 0;

}