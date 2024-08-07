// how many subarrays are there with max=x,min=y and no k

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x,y,k,num;
        int count=0, xflag=0 ,yflag=0;   
        
        cin >> n >> x >> y >> k;  // get the input
        vector<int> vec(n);
        for (int i=0; i<n; i++) cin >> vec[i];
        
        // check subarrays
        for(int start=0; start<n; start++)
        {
            for(int end=start; end<n; end++)
            {
                if(vec[end]==x) xflag=1;
                else if(vec[end]==y) yflag=1;
                else if(vec[end]>x || vec[end]<y || vec[end]==k) break;

                if(xflag && yflag) count++;
            }
            xflag=0;
            yflag=0;
        }
        
        cout << count << std::endl;
    }
    return 0;
}


