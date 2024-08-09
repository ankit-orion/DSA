class Solution
{
public:
    trappingWater(int arr[], int n)
    {
        vector<int> maxL;
        vector<int> maxR;
        vector<int> minVal;
        int mxl = arr[0];
        for (int i = 0; i < n; i++)
        {
            mxl = max(mxl, arr[i]);
            maxL.push_back(mxl);
        }
        int mxr = arr[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            mxr = max(mxr, arr[i]);
            maxR.push_back(mxr);
        }
        for (int i = 0; i < n; i++)
        {
            minVal.push_back(min(maxL[i], maxR[i]));
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (minVal[i] - arr[i]);
        }
        return sum;
    }
    int trap(vector<int> &height)
    {
        trappingWater(height);
    }
};