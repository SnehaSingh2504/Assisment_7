#include <stdio.h>

int main() {
    int n, key;
    scanf("%d", &n);         

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]); 

    scanf("%d", &key);        

    int index = -1;           
    for(int i=0;i<n;i++){
        if(arr[i] == key){    
            index = i;        
            break;            
        }
    }

    printf("%d\n", index);

    return 0;
}
