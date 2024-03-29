
//11. Sieve of Eratosthenes


class Solution {
public:
    int countPrimes(int n) {
        bool* isPrime = new bool[n];
        
        for(int i=2;i<n;i++)
        {
            isPrime[i] = true;
        }
        
        for(int i=2;i*i<n;i++)
        {
            if(!isPrime[i]) continue;
            
            for(int j=i*i;j<n;j+=i)
                isPrime[j]=false;
        }
        
        int total=0;
        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
                total++;
        }
        return total;
    }
};

