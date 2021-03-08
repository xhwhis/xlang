{
    def a = 1005;
    for (def a = 1; a <= 100; a = a + 1) {
        if (a == 4) break;
        print a;
    }
    for (def a = 1; a <= 3; a = a + 1) {
        print a;
        if (a) {
            def a = 105;
            {
                {
                    continue;
                }
            }
        }
    }
    print a;
}
