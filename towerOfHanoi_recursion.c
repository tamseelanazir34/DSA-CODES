#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n; 

    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves:\n");
    towerOfHanoi(n, 'S', 'D', 'A'); 
	 // S = Source, D = Destination, A = Auxiliary

    return 0;
}

