int main()
{
    int x,a,b,c;
    a = 1;
    b = 2;
    c = 3;
    scanf("%d",&x);
    for(int i=0; i < x; i++){
    	printf("%d %d %d PUM\n",a,b,c);
    	a = a * 1 + 4;
        b = b * 1 + 4;
        c = c * 1 + 4;
        
    }
    return 0;
}