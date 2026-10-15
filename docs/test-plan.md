
# Arduino LED Blinking - Test Plan

## Objective

Verify that the Arduino LED blinking program compiles,
uploads successfully, and follows the expected timing.

## Test Environment

- Board: Record the actual Arduino board used
- Software: Record the Arduino IDE version
- LED: Built-in LED or documented external LED
- Supply: USB or the appropriate supported power source

## Test Cases

| ID | Test | Expected Result |
|---|---|---|
| TC01 | Compile the program | Compilation succeeds |
| TC02 | Upload the program | Upload completes successfully |
| TC03 | Observe LED output | LED turns on and off |
| TC04 | Check ON duration | Approximately 1 second |
| TC05 | Check OFF duration | Approximately 1 second |
| TC06 | Restart the board | Program starts blinking again |

## Test Results

Record the actual result for each test:
- PASS: The expected result was observed.
- FAIL: The expected result was not observed.
- NOT TESTED: The test has not been performed.

Do not mark a test PASS without performing it.

## Evidence

Add links or screenshots showing compilation, upload,
and the observed LED behavior.

## Conclusion

Complete this section after running the tests.
Summarize the tests passed, failed, and not performed.
