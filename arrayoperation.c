#include <stdio.h>

#define MAX 20

int arr[MAX];
int size = 0;

// 1. Insert at End
void Insert()
{
    if (size == MAX)
    {
        printf("\nArray is full!\n");
        return;
    }

    printf("Enter the value: ");
    scanf("%d", &arr[size]);

    size++;

    printf("\nElement added successfully.\n");
}

// 2. Display
void Display()
{
    if (size == 0)
    {
        printf("\nArray is empty.\n");
        return;
    }

    printf("\nArray values: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// 3. Insert at Index
void Insert_at()
{
    if (size == MAX)
    {
        printf("\nArray is full!\n");
        return;
    }

    int idx, value;

    printf("Enter the index (0 to %d): ", size);
    scanf("%d", &idx);

    if (idx < 0 || idx > size)
    {
        printf("\nInvalid index!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (int i = size; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[idx] = value;
    size++;

    printf("\nElement inserted successfully.\n");
}

// 4. Delete from End
void Delete_End()
{
    if (size == 0)
    {
        printf("\nArray is empty.\n");
        return;
    }

    size--;

    printf("\nElement deleted from the end.\n");
}

// 5. Delete Element by Index
void Delete_Element()
{
    if (size == 0)
    {
        printf("\nArray is empty.\n");
        return;
    }

    int idx;

    printf("Enter the index to delete (0 to %d): ", size - 1);
    scanf("%d", &idx);

    if (idx < 0 || idx >= size)
    {
        printf("\nInvalid index!\n");
        return;
    }

    // Shift elements to the left
    for (int i = idx; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("\nElement deleted successfully.\n");
}

// 6. Linear Search
void Search()
{
    if (size == 0)
    {
        printf("\nArray is empty.\n");
        return;
    }

    int value;
    int found = 0;

    printf("Enter the value to search: ");
    scanf("%d", &value);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            printf("\nElement found at index %d.\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nElement not found.\n");
    }
}

// Main Function
int main()
{
    int choice;

    while (1)
    {
        printf("\n====================================");
        printf("\n       ARRAY OPERATIONS");
        printf("\n====================================\n");

        printf("1. Insert At End\n");
        printf("2. Display\n");
        printf("3. Insert At Index\n");
        printf("4. Delete From End\n");
        printf("5. Delete Element\n");
        printf("6. Search (Linear)\n");
        printf("7. Exit\n");

        printf("\nEnter option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                Insert();
                break;

            case 2:
                Display();
                break;

            case 3:
                Insert_at();
                break;

            case 4:
                Delete_End();
                break;

            case 5:
                Delete_Element();
                break;

            case 6:
                Search();
                break;

            case 7:
                printf("\nProgram terminated.\n");
                return 0;

            default:
                printf("\nInvalid option! Please try again.\n");
        }
    }

    return 0;
}