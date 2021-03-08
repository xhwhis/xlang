{
    for (def i = 2; i <= 100; i++) {
        def flag = 1;
        for (def j = 2; j * j <= i && flag; j++) {
            if (i % j == 0) {
                flag = 0;
            }
        }
        if (flag) {
            print i;
        }
    }
}
