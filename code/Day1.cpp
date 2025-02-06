double areaSwitchCase(int ch, vector<double> a) {
    // write your code here
    switch (ch){
        case 1:{
            double r = a[0];
            return M_PI *r*r;

        }
        case 2:{
            double l = a[0];
            double b =a[1];
            return l*b;

        }
        default:

        return -1.0;
    }
}
