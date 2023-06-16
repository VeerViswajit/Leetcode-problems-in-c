#define MAX_SIZE 1000

const char* letters[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void dfs(char* digits, int index, char* path, char** result, int* returnSize) {
    if (digits[index] == '\0') {
        path[index] = '\0';
        result[(*returnSize)++] = strdup(path);
        return;
    }
    int digit = digits[index] - '0';
    for (int i = 0; i < strlen(letters[digit]); i++) {
        path[index] = letters[digit][i];
        dfs(digits, index + 1, path, result, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    *returnSize = 0;
    if (digits == NULL || digits[0] == '\0') {
        return NULL;
    }
    char** result = (char**) malloc(sizeof(char*) * MAX_SIZE);
    char* path = (char*) malloc(sizeof(char) * strlen(digits) + 1);
    dfs(digits, 0, path, result, returnSize);
    free(path);
    return result;
}
