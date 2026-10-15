#include <stdio.h>

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

    int getComponentWattage(int category, int component){
        switch(category){
            case 1: // CPU
                switch(component){
                    case 1: return 105;
                    case 2: return 253;
                    case 3: return 120;
                    default: return 0;
                }
            case 2: // GPU
                switch(component){
                    case 1: return 145;
                    case 2: return 300;
                    case 3: return 360;
                    default: return 0;
                    
                }
            case 5: // PSU
                switch(component){
                    case 1: return 550;
                    case 2: return 650;
                    case 3: return 850;
                    default: return 0;
                }
            default: return 0;
        }
    }
int main() {
    int category;
    int component;
    char keepGoing;
    int cpuPower = 0;
    int gpuPower = 0;
    int psuPower = 0;
    int systemBasePower = 50;
    int totalPowerDraw = 0;
    int recommendedPSUPower = 0;

    int selectedParts[6] = {0};

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

    do{
        if(category>=1 && category<=5){
            Catalogue(category);
            printf("Enter the component number that you want to buy: ");
            scanf("%d", component);

            selectedParts[category] = component;
            printf("Component %d of category %d is stored in cart.\n", component, category);

            if(category == 1){
                cpuPower = getComponentWattage(1, component);
                printf("The selected CPU is %d and its power consumption is %dW.\n", component, cpuPower);
            }
            else if(category == 2){
                gpuPower = getComponentWattage(2, component);
                printf("The selected GPU is %d and its power consumption is %dW.\n", component, gpuPower);
            }
            else if(category == 5){
                psuPower = getComponentWattage(5, component);
                printf("The selected PSU is %d and its power rating is %dW.\n", component, psuPower);
            }
            else printf("Stored component is %d and category is %d\n");
        }

        else{
            printf("Enter the correct category between 1 and 5");
        }
        printf("Do you want to select another component? (y/n): ");
        scanf("%c", &keepGoing);
    }while(keepGoing == "y" || keepGoing == "Y");

    totalPowerDraw = cpuPower + gpuPower + systemBasePower;

    if(totalPowerDraw <= 420) recommendedPSUPower = 550;
    else if(totalPowerDraw <= 520) recommendedPSUPower = 650;
    else if(totalPowerDraw <= 680) recommendedPSUPower = 850;
    else recommendedPSUPower = 1000;
}
