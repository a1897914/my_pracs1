

int binary_to_int(int binary_digits[], int number_of_digits){
    int result = 0;

    for (int i = 0; i < number_of_digits; i++)
    {
        if (binary_digits[i] != 1 && binary_digits[i] != 0)
        {
            return 0;
        }
       
    }
    

    for (int i = 0; i < number_of_digits; i++)
    {
        result = (result << 1) + binary_digits[i];
    }

    return result;
    
}