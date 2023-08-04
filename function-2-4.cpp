int array_min(int integers[], int length){
    int min_value = integers[0];

    if (length <= 0)
    {
        return -1;
    }
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] < min_value)
        {
            min_value = integers[i];
        }
        
    }
    
    return min_value;
}

int array_max(int integers[], int length){
    int max_value = integers[0];

    if (length <= 0)
    {
        return -1;
    }
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] > max_value)
        {
            max_value = integers[i];
        }
        
    }
    
    return max_value;
}

int sum_min_max(int integers[], int length){
    if (length <= 0)
    {
        return -1;
    }

    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);

    int result = min_value + max_value;

    return result;
    
}