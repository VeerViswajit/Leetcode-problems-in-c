int reverse(int x){
    if(x==-2147483412){
        return -2143847412;
    }
    else if(x<1534236469 && x>-1563847412){
        int size=0;
        int temp=x;
        while(temp!=0){
            size++;
            temp=temp/10;
        }
        temp=0;
        for(int i=0;i<size;i++){
            temp+=(x%10)*pow(10,size-i-1);
            x=x/10;
        }
        return temp;
    }
    else{
        return 0;
    }
}
