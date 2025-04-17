// // #include <iostream>
// // #include <vector>
// // #include <string>
// // #include <unordered_map>
// // #include <algorithm> // Include this header for std::all_of

// // using namespace std;

// // string decode14SegmentDisplay(const vector<string>& grid) {
// //     unordered_map<string, char> alphabetMap = {
// //         {"01110100011000111111010001010001", 'A'},
// //         {"111101000111110100011000111110", 'B'},
// //         {"0111010001100001000010000101110", 'C'},
// //         {"1111010001100011000110001101110", 'D'},
// //         {"111111000011110100001000011111", 'E'},
// //         {"111111000011110100001000010000", 'F'},
// //         {"0111010001100001001110001101110", 'G'},
// //         {"100011000111111100011000110001", 'H'},
// //         {"111110010000100001000010011111", 'I'},
// //         {"001110000100001000010000101110", 'J'},
// //         {"100011001011100110001010011001", 'K'},
// //         {"100001000010000100001000011111", 'L'},
// //         {"100011101110101100011000110001", 'M'},
// //         {"100011100110101100111000110001", 'N'},
// //         {"011101000110001100011000101110", 'O'},
// //         {"111101000110001111110100001000", 'P'},
// //         {"011101000110001100011010101100", 'Q'},
// //         {"111101000110001111110100011001", 'R'},
// //         {"0111010001100000111100001101110", 'S'},
// //         {"111110010000100001000010000100", 'T'},
// //         {"1000110001100011000110001101110", 'U'},
// //         {"100011000110001100010101001000", 'V'},
// //         {"100011000110001100011010111010", 'W'},
// //         {"100011000101010001010100110001", 'X'},
// //         {"100011000101010001000010000100", 'Y'},
// //         {"111110000100010001000010011111", 'Z'}
// //     };

// //     int nCols = grid[0].size();
// //     string result = "";
// //     int col = 0;

// //     while (col < nCols) {
// //         // Skip columns of zeros (padding)
// //         while (col < nCols && all_of(grid.begin(), grid.end(), [i=col](const string& row) {
// //     return row[i] == '0';
// //      })) {
// //        col++;
// //    }

// //         if (col >= nCols) break;

// //         // Extract a 9x5 block
// //         vector<string> block(9);
// //         for (int i = 0; i < 9; i++) {
// //             block[i] = grid[i].substr(col, 5);
// //         }

// //         // Convert block to a hashable string
// //         string blockKey = "";
// //         for (const auto& row : block) {
// //             blockKey+= row;
// //         }
// //        cout<<" "<<"blockKey "<<blockKey<<endl;
// //         // Match the block to an alphabet
// //         if (alphabetMap.find(blockKey) != alphabetMap.end()) {
// //             result += alphabetMap[blockKey];
// //         }
// //          else {
// //             result += '?';
// //         }

// //         // Move to the next block (skip padding)
// //         col += 5;
// //         while (col < nCols && all_of(grid.begin(), grid.end(), [col](const string& row) {
// //             return row[col] == '0';
// //         })) {
// //             col++;
// //         }
// //     }

// //     return result;
// // }

// // int main() {
// //     vector<string> grid = {
// //         "111110000011111011111",
// //         "001000000010000010000",
// //         "001000000010000010000",
// //         "001000000010000010000",
// //         "001000000010000011111",
// //         "001000000010000000001",
// //         "001000000010000000001",
// //         "001000000010000000001",
// //         "001000000011111011111"
// //     };

// //     // for (int i = 0; i < 9; ++i) {
// //     //     cin >> grid[i];
// //     // }

// //     string result = decode14SegmentDisplay(grid);

// //     cout  << result << endl;

// //     return 0;
// // }







// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_map>
// #include <algorithm>

// using namespace std;

// string decode14SegmentDisplay(const vector<string>& grid) {
//     unordered_map<string, char> alphabetMap = {
//         {"01110100011000111111010001010001", 'A'},
//         {"111101000111110100011000111110", 'B'},
//         {"0111010001100001000010000101110", 'C'},
//         {"1111010001100011000110001101110", 'D'},
//         {"111111000011110100001000011111", 'E'},
//         {"111111000011110100001000010000", 'F'},
//         {"0111010001100001001110001101110", 'G'},
//         {"100011000111111100011000110001", 'H'},
//         {"111110010000100001000010011111", 'I'},
//         {"001110000100001000010000101110", 'J'},
//         {"100011001011100110001010011001", 'K'},
//         {"100001000010000100001000011111", 'L'},
//         {"100011101110101100011000110001", 'M'},
//         {"100011100110101100111000110001", 'N'},
//         {"011101000110001100011000101110", 'O'},
//         {"111101000110001111110100001000", 'P'},
//         {"011101000110001100011010101100", 'Q'},
//         {"111101000110001111110100011001", 'R'},
//         {"0111010001100000111100001101110", 'S'},
//         {"111110010000100001000010000100", 'T'},
//         {"1000110001100011000110001101110", 'U'},
//         {"100011000110001100010101001000", 'V'},
//         {"100011000110001100011010111010", 'W'},
//         {"100011000101010001010100110001", 'X'},
//         {"100011000101010001000010000100", 'Y'},
//         {"111110000100010001000010011111", 'Z'}
//     };

//     int nCols = grid[0].size();
//     string result = "";
//     int col = 0;

//     while (col < nCols) {
//         // Skip columns of zeros (padding)
//         while (col < nCols && all_of(grid.begin(), grid.end(), [i=col](const string& row) {
//             return row[i] == '0';
//         })) {
//             col++;
//         }

//         if (col >= nCols) break;

//         // Extract a 9x5 block
//         vector<string> block(9);
//         for (int i = 0; i < 9; i++) {
//             block[i] = grid[i].substr(col, 5);
//         }

//         // Convert block to a hashable string
//         string blockKey = "";
//         for (const auto& row : block) {
//             blockKey += row;
//         }

//         // Match the block to an alphabet
//         if (alphabetMap.find(blockKey) != alphabetMap.end()) {
//             result += alphabetMap[blockKey];
//         } else {
//             result += '?';
//         }

//         // Move to the next block (skip padding)
//         col += 5;
//         while (col < nCols && all_of(grid.begin(), grid.end(), [i=col](const string& row) {
//             return row[i] == '0';
//         })) {
//             col++;
//         }
//     }

//     return result;
// }

// int main() {
//     vector<string> grid = {
//         "111110000011111011111",
//         "001000000010000010000",
//         "001000000010000010000",
//         "001000000010000010000",
//         "001000000010000011111",
//         "001000000010000000001",
//         "001000000010000000001",
//         "001000000010000000001",
//         "001000000011111011111"
//     };

//     string result = decode14SegmentDisplay(grid);

//     cout << "TCS: " << result << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include<bitset>

using namespace std;

// Function to print grid structure
void printGrid(const vector<string>& grid) {
    for (const auto& row : grid) {
        cout << row << endl;
    }
}

// Function to extract and print blocks
void printBlocks(const vector<string>& grid, int startCol) {
    for (int i = 0; i < 9; i++) {
        string block = grid[i].substr(startCol, 5);
        cout << block << endl;
    }
}

string decode14SegmentDisplay(const vector<string>& grid) {
    unordered_map<string, char> alphabetMap;
    int nCols = grid[0].size();

    // Initialize alphabetMap with all possible combinations
    for (int i = 0; i < (1 << 15); ++i) {
        string binary = bitset<15>(i).to_string();
        string key = binary.substr(0, 9);
        alphabetMap[key] = 'A' + (alphabetMap.size() % 26);
    }

    // Print grid structure
    printGrid(grid);

    // Extract and print blocks
    int col = 0;
    string result = "";
    while (col < nCols) {
        printBlocks(grid, col);

        // Convert block to a hashable string
        string blockKey = "";
        for (int i = 0; i < 8 && col + i < nCols; i++) {
            blockKey += grid[i].substr(col, 5);
        }

        if (!blockKey.empty()) {

            // Match the block to an alphabet
            try {
                if (alphabetMap.find(blockKey) != alphabetMap.end()) {
                    result += alphabetMap[blockKey];
                } else {
                    alphabetMap[blockKey] = 'A' + (alphabetMap.size() % 26); // Assign a new character
                    result += alphabetMap[blockKey];
                }
            } catch (const out_of_range& e) {
                cout << "Error: " << e.what() << ". Skipping this block." << endl;
            }

            // Move to the next block
            col += 5;
        } 
        else {
            col++;
        }
    }

    return result;
}

int main() {
    vector<string> grid = {
        "111110000011111011111",
        "001000000010000010000",
        "001000000010000010000",
        "001000000010000010000",
        "001000000010000011111",
        "001000000010000000001",
        "001000000010000000001",
        "001000000010000000001",
        "001000000011111011111"
    };

    string result = decode14SegmentDisplay(grid);

    cout << result << endl;

    return 0;
}