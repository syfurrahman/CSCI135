#include <iostream>

int main()
{
    // Declare an int array with 5 rows.
    int** arr = new int*[5];

    // Initialize each row with different lengths.
    arr[0] = new int[5]{0, 0, 0, 0, 0};
    arr[1] = new int[4]{1, 1, 1, 1};
    arr[2] = new int[3]{0, 0, 0};
    arr[3] = new int[2]{1, 1};
    arr[4] = new int[1]{0};

    // Print the array.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    // Deallocate memory.
    for (int i = 0; i < 5; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
