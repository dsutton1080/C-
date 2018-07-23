#include <iostream>
#include <array>

int returnHigh(int arr[], int size){
    int highest = arr[0];
    for (int i=1; i<size; i++){
        if (arr[i]>highest){
            highest = arr[i];
        }
    }
    return highest;
}

int returnLow(int arr[], int size){
    int lowest = arr[0];
    for (int i=1; i<size; i++){
        if (arr[i]<lowest){
            lowest = arr[i];
        }
    }
    return lowest;
}

double returnAverage(int arr[], int size){
    double total=0;
    for (int i=0; i<size; i++){
        total += arr[i];
    }
    return total / size;
}

int randomNumber(){
    return rand() % 100 + 1;
}

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        std::cout<<arr[i]<<std::endl;
    }
}

int main()
{
    int arrsize;
    std::cout<<"How big do you want the arrray to be: ";
    std::cin>>arrsize;
    int arr[arrsize];
    for (int i=0; i<arrsize; i++){
        arr[i] = randomNumber();
    }
    std::cout<<"The highest number is "<<returnHigh(arr, arrsize)<<std::endl;
    std::cout<<"The lowest number is "<<returnLow(arr, arrsize)<<std::endl;
    std::cout<<"The average is "<<returnAverage(arr, arrsize)<<std::endl;
	return 0;
}
