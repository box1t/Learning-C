int fizzbuzz(int limit){
  int y;
  for (y=1; y <= limit; ++y){
    if (y % (3*5) == 0)
        printf("FizzBuzz");
    else if (y % 5 == 0)
        printf("Buzz");
    else if (y % 3 == 0)
        printf("Fizz");
    else
        printf("%d", y);
    if (y < limit)
        printf(" "); }
}
