class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         std::vector<int> result;

    for (int asteroid : asteroids) {
        bool destroyed = false;
        
        while (!result.empty() && result.back() > 0 && asteroid < 0) {
            if (result.back() < -asteroid) {
                // The last asteroid in the result is smaller, so it gets destroyed
                result.pop_back();
            } else if (result.back() == -asteroid) {
                // Both asteroids are of the same magnitude, both get destroyed
                result.pop_back();
                destroyed = true;
                break;
            } else {
                // The last asteroid in the result is larger, so the incoming asteroid gets destroyed
                destroyed = true;
                break;
            }
        }
        
        if (!destroyed) {
            result.push_back(asteroid);
        }
    }

    return result;
    }
};