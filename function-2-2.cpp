

int bin_to_int(int binary_digits[], int number_of_digits){
   for (int i = 0; i < number_of_digits; i++)
   {
   if (binary_digits[i] != 0 && binary_digits[i] != 1)
   {
    return 0;
   }
   
   }
   
    
    
    int result = 0;

    for (int i = 0; i < number_of_digits; i++)
    {
        result = (result << 1) + binary_digits[i];
    }

    return result;
    

   
}
