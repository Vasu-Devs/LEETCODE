class Solution {
    public:
    
        int addDigits(int num) {
            
            while(num>9){
                int s=0;
                // int i=sum;
                
                while(num){
                    s+=num%10;
                    num/=10;
                }
                num=s;
    
            }
            return num;
            // int sum=0;
            // while(num!=0){
            //     sum+=num%10;
            //     num/=10;
            // }
            // while(len(sum)!=1){
            //     // int i=sum;
            //     int s=0;
            //     while(sum!=0){
            //         s+=sum%10;
            //         sum/=10;
            //     }
            //     sum=s;
    
            // }
            // return sum;
        }
    };