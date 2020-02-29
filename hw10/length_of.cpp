int length_of(const char *array) {
    int counter=0;
    while (array[counter]!=0) {
        counter++;
    }
    return counter;
}