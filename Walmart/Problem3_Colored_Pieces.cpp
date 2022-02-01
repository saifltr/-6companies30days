class Solution {
public:
    bool winnerOfGame(string colors) {
    int alice=0;//store the moves of alice
    int bob=0;//store the moves of bob
    int count=0;//store the count of consecutive character
    
    int n=colors.length();
    
    //for alice
    for(int i=0;i<n;i++)
    {
        if(colors[i]=='A')
        {
            count++;
            
        }
        else
        {
            if(count>=3)
            
                alice+=count-2;
                count=0;
            
        }
    }
    if(count>=3)
    
        alice+=count-2;
        count=0;
        
    
    
    ///for bob
    
    for(int i=0;i<n;i++)
    {
        if(colors[i]=='B')
        {
            count++;
        }
        else
        {
            if(count>=3)
            
                bob+=count-2;
                count=0;
                
            
        }
    }
    if(count>=3)
    
        bob+=count-2;
    
    
    if(alice>bob)return true;
    return false;
    
}
    };
