#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= (1 << 0);
            break;
        case 2:
            num &= ~(1 << 30);
            break;
        case 3:
            num ^= (1 << 15);
            break;
        default:
            printf("Error: Invalid operation type!\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type;
    
    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);
    printf("Result: %d\n", result);
    return 0;
}