int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x); // Output: 20

  //Dangling pointer
  int *danglingPtr;
  int y = 30;
  danglingPtr = &y;
  free(&y); // Freeing memory pointed by danglingPtr
  *danglingPtr = 40; // Attempting to access freed memory
  printf("%d\n", *danglingPtr); //Undefined behaviour

  return 0; 
}