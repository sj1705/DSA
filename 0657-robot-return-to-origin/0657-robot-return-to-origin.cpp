class Solution {
public:
    bool judgeCircle(string moves) {
        int movement_vertical=0;
        int movement_horizontal=0;
        for(char move:moves)
        {
            if(move=='U')   movement_vertical +=1;
            if(move=='D')   movement_vertical +=-1;
            if(move=='L')   movement_horizontal +=-1;
            if(move=='R')   movement_horizontal +=1;
        }
        if(movement_vertical==0&&movement_horizontal==0)
            return true;
        return false; 
    }
};