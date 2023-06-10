#include<iostream>
using namespace std;
//  find the second largest element in the given array where duplicates value given.
//     int array[] = {2 ,3 , 8 ,9 ,5 ,9,12 ,12};


 int second_larg_element(int array[],int size){
        int max =INT16_MIN;
        int second_max =INT16_MIN;

        for(int i=0 ; i<size ; i++){
            if(array[i]>max){
                max=array[i];
            }
        }
        for(int i=0 ; i<size ; i++){
            if(array[i]>second_max && array[i]!=max){
               second_max= array[i];
            }
        }
        return second_max;

    }

int main(){
    int array[] = {2 ,3 , 8 ,9 ,5 ,9,12 ,12};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<second_larg_element(array ,size)<<endl;
   
    return 0;
}
