int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x); // Output: 20

  // Correct way to handle memory allocation and deallocation
  int *dynamicPtr;
  dynamicPtr = (int *) malloc(sizeof(int));
  if (dynamicPtr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  *dynamicPtr = 30;  
  printf("%d\n", *dynamicPtr); // Output: 30
  free(dynamicPtr); //Freeing allocated memory
  dynamicPtr = NULL; //Setting pointer to NULL after freeing memory
  return 0; 
} 