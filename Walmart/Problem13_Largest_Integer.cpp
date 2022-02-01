class compare
{
  public:
    bool operator()(string& a ,string& b)
    {
        if(a.length() == b.length())
            return (a > b);
        return (a.length() > b.length());
    }
};
class Solution {
public:
    string kthLargestNumber(vector<string>& A, int k) {
        sort(A.begin(),A.end(),compare());
        return A[k - 1];
    }
};
