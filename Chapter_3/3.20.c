int main(){
    
    float principal, interest_rate, days;
    
    while (principal != -1) {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        
        if(principal == -1)
            break;
        
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        
        printf("Enter term of the loan in days: ");
        scanf("%f", &days);
        
        printf("The interest charge is $%.2f\n", principal * interest_rate * days /365);
    }
    
    return 0;
    
}
