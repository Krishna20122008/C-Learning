#include <stdio.h>
#include <stdlib.h>

void Catalogue(int category){
    switch(category){
        case 1: 
            printf("\n Available Processors (CPU): \n");
            printf("1. AMD Ryzen 5 7600X   - Rs. 18,000 (105W)\n");
            printf("2. Intel Core i7 14700K - Rs. 45,000 (253W)\n");
            printf("3. AMD Ryzen 7 7800X3D  - Rs. 42,000 (120W)\n");
            break;
        case 2:
            printf("\n Available Graphics Cards (GPU): \n");
            printf("1. NVIDIA RTX 5060 8GB - Rs. 34,740 (145W)\n");
            printf("2. NVIDIA RTX 5070 TI 16GB - Rs. 1,29,299 (300W)\n");
            printf("3. NVIDIA RTX 5080 16 GB - Rs. 1,07,000 (360W)\n");
            break;
        case 3: 
            printf("\n Available RAM Kits \n");
            printf("1. 16GB (8x2) DDR5 5200MHz - Rs. 24,500\n");
            printf("2. 32GB (16x2) DDR5 6000MHz- Rs. 47,000\n");
            printf("1. 64GB (32x2) DDR5 6000MHz - Rs. 1,25,000\n");
            break;
        case 4:
            printf("\n Available Storage (NVMe SSDs) \n");
            printf("1. 1TB Gen4 NVMe SSD - Rs. 18,000\n");
            printf("2. 2TB Gen4 NVMe SSD - Rs. 36,000\n");
            break;
        case 5:
            printf("\n Available Power Supplies (PSUs) \n");
            printf("1. 550W Bronze PSU - Rs. 3,800\n");
            printf("2. 650W Gold PSU   - Rs. 6,500\n");
            printf("3. 850W Gold PSU   - Rs. 10,500\n");
            break;

        default:
            printf("Invalid category selected.\n");
            break;
    }
}
int main() {
    int category;
    printf("Welcome to Custom PC Components Picker!\n\n");

    printf("Here's the PC Component Category:\n\n");
    printf("1. Processor (CPU)\n");
    printf("2. Graphics Card (GPU)\n");
    printf("3. Memory (RAM)\n");
    printf("4. Storage (SSD)\n");
    printf("5. Power Supply (PSU)\n");

    printf("\nEnter the category number of the PC Component you want to buy: ");

    scanf("%d", &category);

    printf("\nYou selected category number: %d\n", category);
}
