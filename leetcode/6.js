/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    var array = [],
        sz = s.length,
        index = 0,
        i = 0
        j = 0,
        len = sz,
        num = 0,
        rightDir = true,
        ans = '';
    if (numRows === 1)
        return s;
    
    while (true) {
        len -= numRows;
        num++;
        if (len < 0)
            break;
        len = len - (numRows - 2);
        num = num + numRows - 2;
        if (len < 0)
            break;        
    }
    num++;
        
    for (var x = 0; x < num; x++) {
        array[x] = []
        for (var y = 0; y < numRows; y++) {
            array[x][y] = '';
        }
    }
    
    for (var x = 0; x < sz; x++) {
        if (rightDir) {
            array[i][j] = s[x];
            if (j !== numRows - 1)
                j++;
            else {
                rightDir = false;
                i++;
                j--;
            }
        } else {
            array[i][j] = s[x];
            if (j !== 0) {
                j--;
                i++;                
            } else {
                rightDir = true;
                j++;
            }            
        }
    }
    for (var x = 0; x < numRows; x++) {
        for (var y = 0; y < num; y++) {
            if (array[y][x] !== '') 
                ans += array[y][x];
        }
    }
    return ans;    
};
