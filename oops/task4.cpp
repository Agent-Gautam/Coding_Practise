class MyClass {
  private:
    const int MAX_SIZE;
    int data[MAX_SIZE];

  public:
    MyClass() : MAX_SIZE(10) {
      for (int i = 0; i < MAX_SIZE; i++) {
        data[i] = i;
      }
    }

    void printData() {
      for (int i = 0; i < MAX_SIZE; i++) {
        cout << data[i] << " ";
      }
      cout << endl;
    }
};
