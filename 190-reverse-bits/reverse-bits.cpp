class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r=0;
        int i=0;
        while(i<32){
            r=(r<<1)|(n&1);
            n>>=1;
            i++;
        }
        return r;
    }
};