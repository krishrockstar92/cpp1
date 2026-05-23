class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int cnt=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if(n%i!=i){
                    cnt++;
                }
            }
        }
        if(cnt==2 && n==1){
            return 0;
        }
        if(cnt==2){
            return 1;
        }
        else{
            return 0;
        }
    }
};
