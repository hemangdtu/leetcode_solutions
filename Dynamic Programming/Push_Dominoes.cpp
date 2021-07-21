class Solution {
public:
    string pushDominoes(string dominoes) {
        for (int i = 0; i < dominoes.size(); i++) {
            if (dominoes[i] == 'L') {
                for (int j = i-1; j >= 0; j--) {
                    if (dominoes[j] == '.') {
                        dominoes[j] = 'L';
                    }
                    else {
                        break;
                    }
                }
            }
            else if (dominoes[i] == 'R') {
                int Lindex = dominoes.find('L', i+1);
                if (Lindex == -1) {
                    for (int j = i+1; j < dominoes.size(); j++) {
                        dominoes[j] = 'R';
                    }
                    break;
                }
                else {
                    int Rindex=0;
                    for (int j = Lindex-1;; j--) {
                        if (dominoes[j] == 'R') {
                            Rindex = j;
                            break;
                        }
                    }
                    for (; i < Rindex; i++) {
                        dominoes[i] = 'R';
                    }
                    int temp = Lindex;
                    while (i < temp) {
                        dominoes[i++] = 'R';
                        dominoes[temp--] = 'L';
                    }
                    i = Lindex;
                }
            }
        }
        return dominoes;
    }
};