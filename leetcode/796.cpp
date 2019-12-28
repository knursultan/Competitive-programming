class Solution {
public:
    bool rotateString(string A, string B) {
        string rotate = A;
        while (true) {
            rotate = rotate + rotate[0];
            rotate.erase(0, 1);
            if (rotate == B)
                return true;
            if (rotate == A)
                return false;            
        }
        return true;
    }
};
