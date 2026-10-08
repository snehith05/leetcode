int maxProfit(int* prices, int pricesSize) {
    int minPrice=prices[0];
    int i;
    int highProfit=0;
    for(i=0;i<pricesSize;i++){
        if(prices[i]<minPrice){
            minPrice=prices[i];
        }
        
        int profit=prices[i]-minPrice;
        if(profit>highProfit){
            highProfit=profit;
        }
    }
    
    return highProfit;

}