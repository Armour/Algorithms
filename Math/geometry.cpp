// Polygon area
int polygon_area() {
    int area = 0;
    int N = lengthof(p);
    // Triangulate the polygon into triangles with points p[0],p[i],p[i+1]
    for(int i = 1; i + 1 < N; i++){
        int x1 = p[i][0] - p[0][0];
        int y1 = p[i][1] - p[0][1];
        int x2 = p[i+1][0] - p[0][0];
        int y2 = p[i+1][1] - p[0][1];
        int cross = x1*y2 - x2*y1;
        area += cross;
    }
    return abs(cross/2.0);
}

// Line-line intersection (A1x + B1y = C1, A2x + B2y = C2)
double det = A1*B2 - A2*B1
if(det == 0){
    //Lines are parallel
} else {
    double x = (B2*C1 - B1*C2) / det;
    double y = (A1*C2 - A2*C1) / det;
}

// Convex hull : If onEdge is true, use as many points as possible for the convex hull, otherwise as few as possible.
convexHull(point[] X, bool onEdge) {
    int N = lengthof(X);
    int p = 0;
    bool[] used = new bool[N];
    //First find the leftmost point
    for (int i = 1; i < N; i++){
        if (X[i] < X[p])
            p = i;
    }
    int start = p;
    do {
        int n = -1;
        int dist = onEdge ? INF : 0;
        for (int i = 0; i < N; i++) {
            //X[i] is the X in the discussion
            //Don't go back to the same point you came from
            if (i == p) continue;
            //Don't go to a visited point
            if (used[i]) continue;
            //If there is no N yet, set it to X
            if (n == -1) n = i;
            int cross = (X[i] - X[p]) x (X[n] - X[p]);
            //d is the distance from P to X
            int d = (X[i] - X[p]) . (X[i] - X[p]);
            if (cross < 0) {
                //As described above, set N=X
                n = i;
                dist = d;
            } else if(cross == 0) {
                //In this case, both N and X are in the
                //same direction.  If onEdge is true, pick the
                //closest one, otherwise pick the farthest one.
                if (onEdge && d < dist) {
                    dist = d;
                    n = i;
                } else if (!onEdge && d > dist) {
                    dist = d;
                    n = i;
                }
            }
        }
        p = n;
        used[p] = true;
    } while(start != p);
}

