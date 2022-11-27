int max3(int a, int b, int c) {
    int max;
    if(a>b && a>c){
      max = a;
    }
    if(b>a && b>c){
      max = b;
    }
    if(c>b && c>a){
      max = c;
    }
    return max;
}

