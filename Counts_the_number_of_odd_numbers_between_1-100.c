// C++ code
//Counts the number of odd numbers between 1-100
void main()
{
  int odd_count=0;
  for(int i=1;i<=100;i++){
    if(i%2!=0){
      odd_count++;
    }
  }
  printf("%d\n",odd_count);
}