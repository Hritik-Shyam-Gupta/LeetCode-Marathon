

int maxProfit(int* prices, int pricesSize){
    int min , max, profit=0;
    min =prices[0];
    max=0;
for(int i=1;i<pricesSize;++i){
    if(prices[i]>min){
       if(profit<(prices[i]-min)){
           profit=prices[i]-min;
       }   
    }else  min=prices[i];
} 
 return profit;  
}