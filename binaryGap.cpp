class Solution {
public:
    int binaryGap(int N) {
        std::string r;
        while(N!=0) {r=(N%2==0 ?"0":"1")+r; N/=2;}
        int length = r.length();
        int max = 0;
        int temp = 0;
        
        for(int i =0; i < length; i++){
            if(r[i] == '1'){
                if(temp == 0){
                    temp += 1;    
                }else{
                    if(temp >= max){
                        
                        max = temp;
                        temp = 1;
                    }else{
                        temp = 1;
                    }
                }
                
            }else{
                if(i == length -1){
                    if(temp != 0){
                        temp = 0;
                    }
                }else{
                    if(temp != 0){
                        temp += 1;
                    }
                }
            }
        }
        
        
        return max;
    }
};
