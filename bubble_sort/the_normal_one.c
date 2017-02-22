
#include <stdio.h>

int main(int argc, char const *argv[])
{


	
    const int n = 10;
    int sequence[n] = {12,17,3141,423,23,45,1,234,904,13};
    int count = 0;
    int sequenceSorted[n];
    int pivot = 0;
    int k = n - 1;
    
    
    while(k){
        for (int i = 0; i < n - 1; ++i)
        {
            if (sequence[i] > sequence[i + 1])
            {
                pivot = sequence[i];
                sequence[i] = sequence[i + 1];
                sequence[i + 1] = pivot;
                //swap
            }else{
                pivot = 0;//remain the same
                
            }
            count += 1;
        }
        sequenceSorted[n - 1] = sequence[n - 1];
        k = k - 1;
        
        
    }
    
    for(int j = 0; j < n; j++){
        printf("%d ", sequence[j]);
    }
    printf("\n");
    printf("%d\n", count);
    
    return 0;
}
  
