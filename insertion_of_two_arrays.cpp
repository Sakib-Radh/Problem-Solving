#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1, nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(2);
    nums1.push_back(1);

    nums2.push_back(2);
    nums2.push_back(2);

    vector<int> res;

        int i, j;

        for(i=0; i<nums1.size(); i++)
        {
            for(j=0; j<nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                  cout<<nums1[i]<<endl;
                  break;

                }

            }

        }


      for(i =0; i<res.size(); i++)
      {
          cout<<res[i]<<endl;

      }

    }


