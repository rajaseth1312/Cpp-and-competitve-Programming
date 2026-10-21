class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // first we set all element distances to themselves as 0
        vector<vector<int>> distance(n, vector<int>(n, INT_MAX));
        // basically makes this like ( no of stuff (x stuff , y stuff))
        for (int i = 0; i < n ; i++) {
            distance[i][i] = 0;
        }

        // setting up the distances between the nodes or basically the weights
        for (const auto& edge : edges) {
            int node1 = edge[0], node2 = edge[1] , dist = edge[2];
            //basically we are given edge is a array os arrays having stuff as node1 node2 and the weight so we set the weight 
            distance[node1][node2] = dist;
            distance[node2][node1] = dist;
        }

        for (int midle = 0;midle < n; ++midle) {
            for (int source = 0; source < n; ++source) {
                for (int destination = 0; destination < n; ++ destination) {
                    if (distance[source][midle] < INT_MAX && distance[midle][destination] < INT_MAX) {
                        distance[source][destination] = min(distance[source][destination], distance[source][midle] + distance[midle][destination]);
                    }
                }
            }
        }
        int minimum_number = n;
        int res = -1;

        for (int source = 0; source < n ; ++source) {
            int source_count = 0;
            for (int destination = 0; destination <n; ++destination) {
                if (distance[source][destination] <= distanceThreshold) {
                    ++source_count;
                }
            }
            if (source_count <= minimum_number) {
                minimum_number = source_count;
                res = source;
            }
        }

        return res;
    }
};

// kind of understood a bit more about shortest paths and implementing them 
// didnt fully understand all the paths will resolve this question tommorow 


// n is not negative so we use dijkstras 
// so we 
// well it takes all 3 algorithm but its saying to use floyd warshall and i didnt study that one yet so will read that and implement here 

// okay floyds has n^ 3 time complexity and the test case max is 100 which works 
// this is quite a big solution
// will learn a lot more then
