class Solution {
public:
    
    int minimumCost(vector<int>& start, vector<int>& target, vector<vector<int>>& specialRoads) {
        map<vector<int>, int> dist; // to store each point minmost dist
        dist[start] = 0;

        //filter roads - those that have cost more than manhatten of themselves
        vector<vector<int>> filteredRoads;
        for(auto r : specialRoads){
            int a = r[0], b = r[1], c = r[2], d = r[3], cost = r[4];
            //a,b ...... c,d with edgecost as cost
            if(cost < abs(a-c) + abs(b-d)){
                filteredRoads.push_back({a,b,c,d,cost});
                dist[{c,d}] = abs(start[0] - c) + abs(start[1] - d);
            } 
        }

        //Dijstras to find the ans
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq; //minheap to pick min most dist
        pq.push({0, start[0], start[1]}); //dist, x, y

        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int mdist = it[0], x= it[1], y = it[2];
            //for reaching x,y from start d is the min most dist

            //try taking any spl road to reach the pt some c,d from x,y
            for(auto r : filteredRoads){
                int a = r[0], b = r[1], c = r[2], d = r[3], rcost = r[4]; //road cost
                //x,y....a,b......c,d

                if(dist[{c,d}] > mdist + abs(x-a) + abs(y-b) + rcost){
                    dist[{c,d}] = mdist + abs(x-a) + abs(y-b) + rcost;
                    pq.push({dist[{c,d}], c, d});
                    // we push c,d so that we can use other spl roads 
                    //x,y...a1,b1....c1,d1....a2,b2....c2,d2
                }
            }
        }

        //now we have the minmost dist to reach every end point of spl roads
        //c,d....target is the deciding factor - overall min is needed
        int ans = abs(start[0] - target[0]) + abs(start[1] - target[1]);
        
        for(auto r : filteredRoads){
            int tx = target[0], ty = target[1];
            int a = r[0], b = r[1], c = r[2], d = r[3], cost = r[4];
            ans = min(ans, dist[{c,d}] + abs(c-tx) + abs(d-ty));
            cout<<dist[{c,d}]<<"\n";
            
        }
        return ans;
    }
};