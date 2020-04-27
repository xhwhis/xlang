{
    func addx(x) {
        func add(a, b) {
            return a + b + x;
        }
        return add;
    }
    def a1 = addx(1);
    def a2 = addx(2);
    print a1(2, 3);
    print a2(3, 4);
}
