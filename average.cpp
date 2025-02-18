#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc,char* argv[]){
    int avg = 0;
    int sum = 0;
    if (argc != 6){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 1; i < argc;i++){
            sum += atof(argv[i]);
        }
        avg = sum/(argc-1);        
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << avg << endl;
        cout << "---------------------------------";

    }
}

