#include <iostream>
#include <string>


// - Reverse the order of the elements in `aj`
void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// - Print the elements of the reversed `aj`
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";

    std::cout << std::endl;
}

/* Driver function to test above functions */
int main(){


    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`

    int aj[] = {3, 4, 5, 6, 7};

    // To print original array
    printArray(aj, 5);

    // Function calling
    rvereseArray(aj, 0, 4);

    std::cout << "Reversed array is" << std::endl;

    // To print the Reversed array
    printArray(aj, 5);

    return 0;
}