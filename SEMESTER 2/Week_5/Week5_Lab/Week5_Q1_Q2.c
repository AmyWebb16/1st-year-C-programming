/*printing out a name array with spaces
Author: Amy Webb
Date: 27-02-2025
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Original incorrect declaration (no null terminator)
    char name[] = { 'R','o','b','e','r','t' };  // No '\0', not a proper string

    // Corrected declaration with null terminator
    char fixed_name[7] = "Robert";  

    // (a) Using puts() - This will cause undefined behavior with `name`
    printf("Using puts with name (may print garbage):\n");
    puts(name);  // Issue: No null terminator

    printf("\nUsing puts with fixed_name (corrected version):\n");
    puts(fixed_name);  // Corrected version

    // (b) Using scanf - Incorrect usage
    printf("\nEnter a string (max 6 chars): ");
    // scanf("%s", &name); // Incorrect: &name is unnecessary
    scanf("%6s", fixed_name); // Corrected: Use name without '&' and limit input
    printf("Updated fixed_name: %s\n", fixed_name);

    // (c) Using strcpy() - Buffer overflow risk
    // strcpy(name, "Philip"); // Incorrect: `name` is too small
    strcpy(fixed_name, "Philip"); // Corrected: `fixed_name` has enough space
    printf("After strcpy: %s\n", fixed_name);

    // (d) Modifying an element - Incorrect usage
    // *(name + 5) = "a"; // Incorrect: "a" is a string
    *(fixed_name + 5) = 'a'; // Corrected: Using a character
    printf("After modification: %s\n", fixed_name);

    // (e) Reassigning an array - Not allowed
    // name = "Philip"; // Incorrect: `name` is an array, cannot be reassigned
    char *ptr_name = "Philip"; // Corrected: Use a pointer
    printf("Using pointer: %s\n", ptr_name);

    return 0;
}
