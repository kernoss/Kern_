int is_identity(int array[10][10]) {
  int oneCount = 0;
  int zeroCount = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (array[i][j] == 1) {
        oneCount = oneCount + 1;
      }
      if (array[i][j] == 0) {
        zeroCount = zeroCount + 1;
      }
    }
  }
  if (oneCount == 10 && zeroCount == 90) {
    return 1;
  } else {
    return 0;
  }
}
