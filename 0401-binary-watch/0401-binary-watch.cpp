class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {

        vector<int> hourLED = {1, 2, 4, 8};
        vector<int> minuteLED = {1, 2, 4, 8, 16, 32};

        vector<vector<int>> hours(5);
        vector<vector<int>> minutes(7);

        for (int a = 0; a < 2; a++)
            for (int b = 0; b < 2; b++)
                for (int c = 0; c < 2; c++)
                    for (int d = 0; d < 2; d++) {

                        int sum = a * 1 + b * 2 + c * 4 + d * 8;
                        int bits = a + b + c + d;

                        if (sum < 12)
                            hours[bits].push_back(sum);
                    }

        for (int a = 0; a < 2; a++)
            for (int b = 0; b < 2; b++)
                for (int c = 0; c < 2; c++)
                    for (int d = 0; d < 2; d++)
                        for (int e = 0; e < 2; e++)
                            for (int f = 0; f < 2; f++) {

                                int sum = a * 1 + b * 2 + c * 4 + d * 8 +
                                          e * 16 + f * 32;
                                int bits = a + b + c + d + e + f;

                                if (sum < 60)
                                    minutes[bits].push_back(sum);
                            }

        vector<string> ans;

        for (int hourBits = 0; hourBits <= 4; hourBits++) {
            int minuteBits = turnedOn - hourBits;

            if (minuteBits < 0 || minuteBits > 6)
                continue;

            for (int h : hours[hourBits]) {
                for (int m : minutes[minuteBits]) {

                    string t = to_string(h) + ":";

                    if (m < 10)
                        t += "0";
                    t += to_string(m);

                    ans.push_back(t);
                }
            }
        }

        return ans;
    }
};