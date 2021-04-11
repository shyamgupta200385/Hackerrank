int jumpingOnClouds(vector<int> c) {
    int min_j = 0;
    int index = c.size();
    int i;
    for (i =0;i<index-1;i++)
    {
        if (c[i] == 0)
            i++;
        min_j +=1;
    }
    return min_j;
}
