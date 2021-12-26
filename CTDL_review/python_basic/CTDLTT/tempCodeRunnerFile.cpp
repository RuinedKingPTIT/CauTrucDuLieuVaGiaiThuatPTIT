  for(int i = x; i >= 0; i--){
            if(matrix[x][i] == 'X') break;
            if(!vis[{x, i}]){
                vis[{x, i}] = true;
                cout << x << " " << i << endl;
                q.push({{x, i}, step+1});
            }
        }