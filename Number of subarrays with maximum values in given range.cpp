class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
       long start=0;
       long end=0;
       long ans=0;
       long empire=0;
       for(end=0;end<n;end++){
           if((a[end]>=L)  && (a[end]<=R)){
               empire=end-start+1;
           }
           if(a[end]>R){
               empire=0;
               start=end+1;
           }
           ans=ans+empire;
       }
        return ans;
    }
};
