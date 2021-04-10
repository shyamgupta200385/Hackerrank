int countingValleys(int steps, string path) {
    int i = 0;
    int up = 0,down = 0;
    bool enterintovalley = false;
    int numberofValleys= 0 ;
    while(i < steps)
    {
        if(path[i] == 'U'){
            if(down != 0)
                down = down + 1;
            else
                up = up + 1;
        }
        else{
            if(up != 0)
                up = up - 1;
            else
                down = down - 1;
        }
        if(up == 0 && down <= -1 && !enterintovalley)
            enterintovalley = true;
        if(up == 0 && down == 0 && enterintovalley)
        {
            numberofValleys +=1;
            enterintovalley = false;
        }
        i +=1;
    }
    return numberofValleys;
}
