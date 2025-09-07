//Merge Arrays: Combine two or more arrays into a sorted result.
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
// cretating array
    int main(){
        int arr1[100];
        int size1;
        int arr2[100];
        int size2;
        printf("ENTER THE SIZE  OF FIRST ARRAY:");
        scanf("%d",&size1);
        printf("ENTER THE SIZE  OF SECOND ARRAY:");
        scanf("%d",&size2);

        printf("ENTER THE ELEMENTS FOR FIRST ARRAY:");
        for (int i = 0; i < size1; i++)
        {
            scanf("%d",&arr1[i]);
        }
        printf("ENTER THE ELEMENTS FOR SECOND ARRAY:");
        for (int i = 0; i < size2; i++)
        {
            scanf("%d",&arr2[i]);
        }

    // printing two array
        printf("THE FiRST ARRAY IS : ");
        for (int i = 0; i < size1; i++)
        {
            printf("%d\t",arr1[i]);
        }
        printf("\n");
        printf("THE Second ARRAY IS : ");
        for (int i = 0; i < size2; i++)
        {
            printf("%d\t",arr2[i]);
        }

    // SORTING FIRST ARRAY 
    for(int i = 0; i< size1 - 1;i++){
            for(int j = 0; j< size1 - i - 1;j++ ){
                if (arr1[j] > arr1[j+1])
                {
                    int temp = arr1[j];
                    arr1[j] = arr1[j+1];
                    arr1[j+1] = temp;
                }
            }
        }
        printf("\n");
        printf("first Sorted array is:");
        for (int i = 0; i < size1; i++)
        {
            printf("%d\t" ,arr1[i]);
        }
        printf("\n");

    // SORTING SECOND ARRAY
        for(int i = 0; i< size2 - 1;i++){
            for(int j = 0; j< size2 - i - 1;j++ ){
                if (arr2[j] > arr2[j+1])
                {
                    int temp = arr2[j];
                    arr2[j] = arr2[j+1];
                    arr2[j+1] = temp;
                }
            }
        }
        printf("Sorted Second array is:");
        for (int i = 0; i < size2; i++)
        {
            printf("%d\t" ,arr2[i]);
        }
        printf("\n");
// Merging Two Array
     int merged[100];
     int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
    if (arr1[i] < arr2[j])
        merged[k++] = arr1[i++];
    else
        merged[k++] = arr2[j++];
}
    while (i < size1)
    merged[k++] = arr1[i++];
    while (j < size2)
    merged[k++] = arr2[j++];

printf("Merged and Sorted Array is:\n");
for (int idx = 0; idx < size1 + size2; idx++)
    printf("%d\t", merged[idx]);
printf("\n");
  
}
